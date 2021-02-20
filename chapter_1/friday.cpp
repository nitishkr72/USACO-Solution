/*
ID: nitish_4
TASK: friday
LANG: C++                 
*/


#include <iostream>
#include <fstream>

#define EPOCH 1900

using namespace std;

int isLeap(int year) {
	if(year%4 == 0) {
		if(year%100 == 0 && year%400 != 0)
			return 0;
		return 1;
	}
	return 0;
}

int main() {
	ifstream infile;
	ofstream outfile;
	
	infile.open("friday.in");
	outfile.open("friday.out");

	int N, week[7] = {0, 0, 0, 0, 0, 0, 0};		//in sequence SAT, SUN, .. .. .. .., FRI;
	infile >> N;

	int week1month = 2;
	for(int j=0; j<N; j++) {
		for(int i=0; i<12; i++) {
			week[(week1month + 5)%7] += 1;
			if(i==0 || i==2 || i==4 || i==6 || i==7 || i==9 || i==11) {	//month with 31 days
				week1month = (week1month+3)%7;
			} else if (i == 1) {
				if (isLeap(EPOCH+j))
					week1month = (week1month+1)%7;
			} else {
				week1month = (week1month+2)%7;
			}
		}
	}

	for(int i=0; i<7; i++)
		if(i<6)
			outfile << week[i] << " ";
		else
			outfile << week[i] << endl;
	infile.close();
	return 0;
}
