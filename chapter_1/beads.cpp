/*
ID: nitish_4
TASK: beads
LANG: C++
*/

#include <iostream>
#include <fstream>

using  namespace std;

int n;

int main() {
	ifstream infile;
	// ofstream outfile;

	infile.open("beads.in");
	// outfile.open("beads.out");

	infile >> n;
	char b[n+1];
	infile >> b;
	b[n] = '\0';
	
	int N = 2*n;
	char beads[N+1];
	for(int i=0; i<n; i++)
		beads[i] = b[i];
	for(int i=n; i<N; i++)
		beads[i] = b[i-n];
	beads[N] = '\0';

	// cout << beads << endl;

	char c, prevc = beads[0];
	int prevSum=0, currSum=0, maxSum;
	maxSum = prevSum + currSum;
	for(int i=0; i<N; i++) {
		c = beads[i];

		if(c == prevc || c == 'w') {
			int count;
			if(prevc == 'w') {
				int k = i-1;
				
			}
		}
	}

	infile.close();
	return 0;
}
