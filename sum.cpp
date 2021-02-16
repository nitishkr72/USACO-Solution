/*
ID: nitish_4
TASK: test
LANG: C++                 
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	FILE * fp1, * fp2;
	fp1 = fopen("test.in", "r");
	fp2 = fopen("test.out", "w");

	int a, b;
	fscanf(fp1, "%d %d", &a, &b);

	a = a + b;
	fprintf(fp2, "%d\n", a);

	fclose(fp1);
	fclose(fp2);

	return 0;
}
