#include "std_lib_facilities.h"


void print_array10(ostream& os, int* a){
	for(int i=0;i<10;i++)
		os << a[i] << endl;
}


void print_array(ostream& os, int* a, int n){
	for(int i=0;i<n;i++)
		os << a[i] << endl;
}


void print_vector(ostream& os, vector<int>& c){
	for(int i=0;i<c.size();++i)
		os << c[i] << endl;
}


int main(){
	int* tomb = new int[10];
	for(int i=0;i<10; i++)
		cout << tomb[i] << endl;
	delete[] tomb;

	int* array_10 = new int[10] {101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
	print_array10(cout, array_10);
	delete[] array_10;

	int* array_11 = new int[11] {101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111};
	print_array(cout, array_11, 11);
	delete[] array_11;

	int* array_20 = new int[20] {101, 102, 103, 104, 105, 106, 107, 108, 109, 110,
								 111, 112, 113, 114, 115, 116, 117, 118, 119, 120};
	print_array(cout, array_20, 20);
	delete[] array_20;

	vector<int> v5 = {101, 102, 103, 104, 105};
	print_vector(cout, v5);

	vector<int> v6 = {101, 102, 103, 104, 105, 106};
	print_vector(cout, v6);

	vector<int> v8 = {101, 102, 103, 104, 105, 106, 107, 108};
	print_vector(cout, v8);
	
	return 0;
}
