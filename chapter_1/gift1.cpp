/*
ID: nitish_4
TASK: gift1
LANG: C++                 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <map>

#define N 15

using namespace std;

int main() {

	ifstream infile;
	ofstream outfile;
	infile.open("gift1.in");
	outfile.open("gift1.out");

	int NP;
	infile >> NP;

	string name, Name[NP];
	map <string, int> grpName;

	for(int i=0; i<NP; i++) {
		infile >> Name[i];
		grpName.insert({Name[i], 0});
	}

	infile >> name;
	int balance, n, div;
	int i = 0;
	while(name.size() > 0 && i < NP) {
		infile >> balance >> n;
		if(n > 0)
			div = (int)balance/n;
		grpName[name] -= balance;
		balance = balance - div*n;
		grpName[name] += balance;
		for(int i=0; i<n; i++) {
			infile >> name;
			grpName[name] += div;
		}
		infile >> name;
		i++;
	}
	for(int i=0; i<NP; i++)
		outfile << Name[i] << " " << grpName[Name[i]] << "\n";

	infile.close();
	outfile.close();
	return 0;
}
