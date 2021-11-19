#include "std_lib_facilities.h"

int birth_year = 2002;

int main(){
	
	cout << "Decimal:\t" << showbase << dec << birth_year << endl;
	cout << "Hexadecimal:\t" << showbase << hex << birth_year << endl;
	cout << "Octal:\t\t" << showbase << oct << birth_year << endl;

	cout << "My age\t\t" <<birth_year << endl;

	cout.unsetf(std::ios::oct);
	cout << "My age:\t\t" << birth_year << endl;

	int a, b, c, d;
	cin >> a >> oct >> b >> hex >> c >> d;
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	return 0;
}