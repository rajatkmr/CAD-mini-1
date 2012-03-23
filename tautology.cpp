/*
###########################################
File: tautology.cpp
This files counts vertex in a PLA array
taken as input.
###########################################
*/
#include "rowofdc.cpp"
#include "column_of_all01.cpp"
#include "single_inp_dep.cpp"
#include "vertexPCount.cpp"
#include "is_cover_unate.h"
#include <math.h>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

bool tautology (char** a, int dim1, int dim2) {
	
	//Apply rule B1 (Universal Cube)
	if ( rowofdc(a, dim1, dim2) )
		return true;
	printf("Rule B1 (Universal Cube) has failed\n");

	//Apply rule B2 (Column of all 1s or 0s)
	if ( column_of_all01(a, dim1, dim2) )
		return false;
	printf("Rule B2 (Column of all 1s or 0s) has failed\n");

	//Apply rule B3 (Single input dependence)
	if ( single_inp_dep(a, dim1, dim2) )
		return true;
	printf("Rule B3 (Single input dependence) has failed\n");	

	//Apply rule B4 (Cover empty)
	if ( dim1 == 0 )
		return false;
	printf("Rule B4 (Cover empty) has failed\n");

	//Apply rule U1 (No Universal Cube)
	if ( is_cover_unate(a, dim1, dim2) && !rowofdc(a, dim1, dim2) ) 
		return false;
	printf("Rule U1 (Unate Cover has No Universal Cube) has failed\n");

	//Apply rule M1 (Insufficient vertex count)
	if ( vertexPCount(a, dim1, dim2) < pow(2,dim2) ) 
		return false;
	printf("Rule M1 (Insufficient vertex count) has failed\n");
}
