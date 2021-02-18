/*
ID: nitish_4
TASK: test
LANG: C++                 
*/

#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ifstream infile;
	ofstream outfile;
	infile.open("test.in");
	outfile.open("test.out");

	int a, b;
	infile >> a >> b;
	outfile << a+b;

	fclose(fp1);
	fclose(fp2);

	return 0;
}
