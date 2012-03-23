#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

bool variable_unate (char **c, int dim1, int dim2) {

bool result = false;

int j_c='0';
for (int j=0; j<dim2; j++) {			//dims2=cols=no_of_inp

	result = true;
	//start row iterations from row 2
	for (int i=1; i<dim1; i++) {		//dim1=rowno

	cout<<"accessing:"<<c[i][j_c]<<endl;
	cout<<"value of i:"<<i<<"value of j:"<<j<<endl;
	
		if (c[i][j_c] != c[i-1][j_c] && c[i][j_c]!='-' && c[i-1][j_c]!='-') {
		result = false;
		cout<<"cover is not unate in variable x"<<j<<endl;
		break;      //break since change from 0 to 1 or vice versa has happened
		}
}//loop over rows ends here

j_c+=1;
	if (result ==true){
		cout<<"cover is unate in variable x"<<j<<endl;
	}
}

return result;
}
