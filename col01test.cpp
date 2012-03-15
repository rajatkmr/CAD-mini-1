
/*
This file tests rowofdc function
*/
#include "vertexPCount.cpp"
#include "rowofdc.cpp"
#include "column_of_all01.cpp"
#include <cstdlib>
#include <stdio.h>
#include <string.h>

//using namespace std;

int main() {
	int dim1 = 3;// no. of rows
	int dim2 = 4;// no. of columns
	bool ans = true;
	char** a;
	
	//allocate space for 2 "pointers to poiters" of "char" data type 
	a = (char **) malloc(sizeof(char *)*dim1);

	//allocate space for memory block containing array of "char" elements 
	for (int row=0;row<dim1;row++) {
		a[row] = (char *) malloc (sizeof(char)*dim2);
	}

	a[0][0] = '-';	a[0][1] = '1';	a[0][2] = '1';	a[0][3] = '-';

	a[1][0] = '-';	a[1][1] = '-';	a[1][2] = '1';	a[1][3] = '-';

	a[2][0] = '-';	a[2][1] = '1';	a[2][2] = '1';	a[2][3] = '-';

	printf("PLA array has column of all 1 s or all 0 s is : %s", (column_of_all01(a, dim1, dim2) ? "true\n":"false\n" ) );
	return 0;
}
