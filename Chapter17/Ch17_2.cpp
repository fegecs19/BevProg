#include "std_lib_facilities.h"

int main(){
	int a = 7;
	int* p1 = &a;
	cout << "pointer: " << p1 << endl << "p1: " << *p1 << endl;

	cout << endl;

	int* p2 = new int[7] {1, 2, 4, 8, 10, 12, 14};
	cout << "p2: ";
	for(int i=0;i<7;++i)
		cout << p2[i] << " " ;
	cout << endl << "pointer: " << p2 << endl << endl;

	int* p3 = p2;
	p1 = p2;
	p3 = p2;
	cout << "p1: ";
	for(int i=0;i<7;++i)
		cout << p1[i] << " ";
	cout << endl << "pointer: " << p1 << endl << endl;
	cout << "p2: ";
	for(int i=0;i<7;++i)
		cout << p2[i] << " ";
	cout << endl << "pointer: " << p1 << endl << endl;

	/*
	delete[] p2;

	


	int* p1 = new int[10] {1, 2, 4, 8, 10, 12, 14, 16, 18 , 20};
	int* p2 = new int[10];
	for(int i=0;i<10;++i)
		p2[i] = p1[i];
	cout << "p2: ";
	for(int i=0;i<10;++i)
		cout << p2[i] << " ";
	cout << endl;
	*/

	vector<int> v1;
	vector<int> v2;
	for(int i= 0;i<10;++i)
		v1.push_back(pow(2,i));
	for(int i=0;i<v1.size();++i)
		v2.push_back(v1[i]);

	cout << "vector: ";
	for(int i=0;i<v2.size();++i)
		cout << v1[i] << " ";
	cout << endl;
	
	return 0;
}