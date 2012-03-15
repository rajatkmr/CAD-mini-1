/*
###########################################
File: rowofdc.cpp
This file tests if any row of Dont Cares is present in PLA
array.
###########################################
*/

#include <stdio.h>

bool rowofdc (char **c, int dim1, int dim2) {
// storage variable
	bool iftrue = false;

	for (int i =0; i<dim1; i++) {
		iftrue = true;
		
		for (int j=0; j<dim2; j++) {
			if (c[i][j] != '-') {
				printf("row breaks; we are in row no. %i & column no. %i \n",i,j);
				printf("value of a[i][j] is %c \n\n",c[i][j]);
				
				iftrue = false;
				break;//jump to next row if 0 or 1 found in row
			}
		}

		if (iftrue == true)
			break; //break from outer loop if found a row with all DCs
	}
	return iftrue;
}
