/*
ID: nitish_4
PROG: beads
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
 
using namespace std;
 
int main() {
	ofstream outfile ("beads.out");
	ifstream infile ("beads.in");
	int N;
	infile >> N;
	string beads;
	infile >> beads;

	if(beads.length() != N)
		N = beads.length();

	int cur = 0, max = 0;
	char wbr;
	bool switched;

	for(int i = 0; i < N; ++i){
		cur = 0;
		switched = false;
		wbr = 'w';
		for(int j = 0; j < N; ++j){
			const char cur_c = beads[(i + j) % N];
			if(cur_c != 'w'){
				if(wbr == 'w'){
					wbr = cur_c;
				}
				else if(wbr != cur_c){
					if(switched)
						break;
					else{
						wbr = cur_c;
						switched = true;
					}
				}
			}
			++cur;
		}
		if(cur > max)
		max = cur;
	}

	outfile << max << '\n';
	
	infile.close();
	outfile.close();
	return 0;
}
