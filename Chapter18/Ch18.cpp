#include "std_lib_facilities.h"

int ga[10];


void f(int p1[], int a){
	int la[10];
	for(int i=0;i<10;++i)
		la[i] = p1[i];
	cout << "The elements of la: ";
	for(int i=0;i<a;++i)
		cout << la[i] << " ";
	cout << endl;

	int* p = new int[a];
	for(int i=0;i<a;++i)
		p[i] = la[i];
	cout << "Elements of the free store array: ";
	for(int i=0;i<a;++i)
		cout << p[i] << " ";
	cout << endl;
	delete[] p;
}

int main(){
	for(int i=0;i<10;++i)
		ga[i] = pow(2, i);

	f(ga, 10);
	int aa[10] = {1, 1*2, 1*2*3, 1*2*3*4, 1*2*3*4*5, 
				1*2*3*4*5*6, 1*2*3*4*5*6*7, 1*2*3*4*5*6*7*8, 
				1*2*3*4*5*6*7*8*9, 1*2*3*4*5*6*7*8*9*10};
	f(aa, 10);

	return 0;
}