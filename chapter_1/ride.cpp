/*
ID: nitish_4
TASK: ride
LANG: C++                 
*/

#include <iostream>
#include <cstdio>
#include <cstring>

#define N 10

using namespace std;

int main() {
	FILE * infile, * outfile;
	infile = fopen("ride.in", "r");
	outfile = fopen("ride.out", "w");

	char comet[8];
	fscanf(infile, "%s", comet);
	int lc = strlen(comet);

	char grpName[8];
	fscanf(infile, "%s", grpName);
	int lg = strlen(grpName);

	long unsigned int cometVal=1, grpVal=1; 
	int i=0;
	while(i < lc) {
		cometVal *= (int)comet[i]- 64;
	        i += 1;	
	}
	
	i = 0;
	while(i < lg) {
		grpVal *= (int)grpName[i] - 64;
		i += 1;
	}
	
	if(cometVal%47 == grpVal%47)
		fprintf(outfile, "%s", "GO\n");
	else
		fprintf(outfile, "%s", "STAY\n");
	
	fclose(infile);
	fclose(outfile);
	return 0;
}
