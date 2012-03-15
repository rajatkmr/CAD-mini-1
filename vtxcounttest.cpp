/*
This file tests veretexPCount function
*/
#include "vertexPCount.cpp"
#include <cstdlib>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
	
	int ans = 2+16+1;
	int dim1 = 3;
	int dim2 = 5;
	
	//allocate space for 2 "pointers to poiters" of "char" data type 
	char** a;
	a = (char **) malloc(sizeof(char *)*dim1);
	
	//allocate space for memory block containing array of "char" elements 
	for (int row=0;row<dim1;row++) {
		a[row] = (char *) malloc (sizeof(char)*dim2);
	}

	a[0][0] = '1';	a[0][1] = '1';	a[0][2] = '1';	a[0][3] = '-';

	a[1][0] = '-';	a[1][1] = '-';	a[1][2] = '-';	a[1][3] = '-';

	a[2][0] = '1';	a[2][1] = '1';	a[2][2] = '1';	a[2][3] = '1';
										
//	printf("%s",b);
	printf("The vertex count of this array must be %i and is %i \n", ans, vertexPCount(a, dim1, dim2));
	return 0;
}
	
	
