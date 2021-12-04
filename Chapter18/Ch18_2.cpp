#include "std_lib_facilities.h"

vector<int> gv;



void f(vector<int>& a){
	vector<int> lv;
	for(int e : gv)
		lv.push_back(e);
	cout << "The elements of lv: ";
	for(int e : lv)
		cout << e << " ";
	cout << endl;
	
	vector<int> lv2 = a;
	cout << "The elements of lv2: ";
	for(int e : lv2)
		cout << e << " ";
	cout << endl;
}

int main(){
	for(int i=0;i<10;++i)
		gv.push_back(pow(2, i));


	f(gv);
	vector<int> vv = {1, 1*2, 1*2*3, 1*2*3*4, 1*2*3*4*5, 
				1*2*3*4*5*6, 1*2*3*4*5*6*7, 1*2*3*4*5*6*7*8, 
				1*2*3*4*5*6*7*8*9, 1*2*3*4*5*6*7*8*9*10};
	f(vv);

	return 0;
}