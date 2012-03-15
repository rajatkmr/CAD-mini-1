/*
###########################################
File: vertexPCount.cpp
This files counts vertex in a PLA array
taken as input.
###########################################
*/
#include <stdio.h>

int vertexPCount (char **c, int dim1, int dim2) {
	unsigned int count=0;//stores points covered by a row in PLA
	int result=0;
//	int count=1;
	for (int i=0; i<dim1; i++) {
		count =1;
		for (int j=0; j<dim2; j++) {
			if (c[i][j] == '-')
				count = count<<1;
		}
		result = result + count;
	}
	return result;
}
 
