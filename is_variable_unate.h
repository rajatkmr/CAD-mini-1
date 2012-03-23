#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool is_variable_unate (char **c, int dim1, int dim2, int col) {

	bool result = false;
	char tmp = '-'; //stores first encounted non DC value of column

	//store first non DC value of input column
	for ( int r = 0; r<dim1; r++) {
		if (c[r][col] != '-') {
			tmp = c[r][col];
			break;
		}
	}
	//if all values DC
	if (tmp == '-') {
		result = true;
	}
	else {
		//start row iterations from row 2
		for (int i=1; i<dim1; i++) {		//dim1=rowno
			if (c[i][col] != '-' && c[i][col] != tmp)
				result = false;
			else 
				result = true;
		} //loop over rows ends here
	}
	return result;
}
