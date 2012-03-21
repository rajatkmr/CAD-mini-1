/*
###########################################
File: single_inp_dep.cpp
This file tests if PLA array has dependence 
on single input only or not.
###########################################
*/

#include <stdio.h>

bool single_inp_dep (const char **a, int dim1, int dim2) {
// initialize to keep count on dependent variables
	int dependence = 0;
	
	for(int j=0; j<dim2; j++) {
		for(int i=0; i<dim1; i++) {

			if(dependence>1)
				return false;
			
			if( a[i][j] != '-') {
				dependence++;
				break;//break loop over column
			}
		}
	}
	
	return true;
}
