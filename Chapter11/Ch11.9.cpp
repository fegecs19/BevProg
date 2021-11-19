//11.9
#include "std_lib_facilities.h"

int main(){
	
	const float f = 1234567.89;	
	cout << "Standard:\t" << f << endl;
	cout << "Default Float:\t" << defaultfloat << f << endl;
	cout << "Fixed:\t\t" << fixed << f << endl;
	cout << "Scientific:\t" << scientific << f << endl;
	cout << endl;

	const double d = 1234567.89;
	cout << "Standard:\t" << d << endl;
	cout << "Default Float:\t" << defaultfloat << d << endl;
	cout << "Fixed:\t\t" << fixed << d << endl;
	cout << "Scientific:\t" << scientific << d << endl;
	cout << endl;

	cout << "Standard:\t" << 1234567.89 << endl;
	cout << "Default Float:\t" << defaultfloat << 1234567.89 << endl;
	cout << "Fixed:\t\t" << fixed << 1234567.89 << endl;
	cout << "Scientific:\t" << scientific << 1234567.89 << endl;
	cout << endl;

	return 0;
}