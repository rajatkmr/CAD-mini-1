/*
###########################################
File: column_of_all01.cpp
This file tests if any column has all 0 s or all 1 s
in PLA array.
###########################################
*/

#include <stdio.h>

bool column_of_all01 (char **c, int dim1, int dim2) {
	
	bool result = false;
	for (int j=0; j<dim2; j++) {
		
		result = true;
		//start row iterations from row 2
		for (int i=1; i<dim1; i++) {
			
			if(c[i][j] == '-') {
				result = false;
				printf("column break: value of a[%i][%i] is: %c \n", i, j, c[i][j]);
				break; //break from this column as '-' is present
			}
			else {
				if (c[i][j] != c[i-1][j]) {
					result = false;
					printf("column break: value of a[%i][%i] is :\n", i, j, c[i][j]);
					break; //break since change from 0 to 1 or vice versa has happened
				}
			}
		}//loop over rows ends here
		if (result ==true) 
			break;	//found column of all 1 s or 0 s
	}
	return result;
}
