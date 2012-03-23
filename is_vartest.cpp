/*
This file tests Tautology function
*/
#include "is_variable_unate.h"
#include <cstdlib>
#include <stdio.h>
#include <string.h>

//using namespace std;

int main() {
	int dim1 = 3;// no. of rows
	int dim2 = 4;// no. of columns
	int ans = 16;//2^dim2
	int column = 3;
	char** a;
	
	//allocate space for 2 "pointers to poiters" of "char" data type 
	a = (char **) malloc(sizeof(char *)*dim1);

	//allocate space for memory block containing array of "char" elements 
	for (int row=0;row<dim1;row++) {
		a[row] = (char *) malloc (sizeof(char)*dim2);
	}

	a[0][0] = '-';	a[0][1] = '-';	a[0][2] = '-';	a[0][3] = '0';

	a[1][0] = '-';	a[1][1] = '-';	a[1][2] = '1';	a[1][3] = '1';

	a[2][0] = '0';	a[2][1] = '0';	a[2][2] = '1';	a[2][3] = '1';

	printf("PLA array is tautology is : %s", (is_variable_unate(a, dim1, dim2, column) ? "true\n":"false\n" ) );
	return 0;
}
