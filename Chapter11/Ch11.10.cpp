//11.10
#include "std_lib_facilities.h"

struct information
{
	information(double phone, string fn, string ln, string e)
		: telNumber(phone), firstName(fn), lastName(ln), email(e)
	{}

	double telNumber;
	string firstName, lastName, email;
};


void printTable(const vector<information>& v)
{
	cout <<  setw(10) << " First Name "  << setw(10) << " Last Name"  << setw(26) << " Email Address"  << setw(17) << " Phone Number"  << endl;
	for (int i = 0; i < 100; ++i)
		cout << "-";
	cout << endl;
	for (information i : v)
		cout  << setw(10) << i.firstName  << setw(10) << i.lastName  << setw(26) << i.email  << setw(17) << fixed << setprecision(0) << i.telNumber  << endl;
	cout << endl;
	for (int i = 0; i < 100; ++i)
		cout << "-";
}

int main(){
	vector<information> v_info = {
		{ 40704281276, "Fegecs", "Gabor", "tanuki@gmail.com" },
		{ 12347586921, "Kovacs", "Andras", "hollowknight@gmail.com" },
		{ 12385913385, "Nagy", "Borbala", "lonedigger@gmail.com" },
		{ 12872364986, "Kiss", "Bence", "escapist@gmailcom" },
		{ 12983728359, "Lakatos", "Balint", "nomalac@gmail.hu" }
	};

	printTable(v_info);
  
	return 0;
}