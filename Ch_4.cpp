#include "std_lib_facilities.h"



int main()
{
	double szam_cm = 0, szam = 0, max = 0, min = 0, sum_m = 0, db = 0;
	vector <double> szam_m;
	string unit = "";

	bool be = true;

	cout << "Enter a double value: ";

	while (cin >> szam) {
		if (szam == '|') {
			
			break;
		}
		cout << "Enter a unit: ";
		while (cin >> unit) {
			if (unit == "m") {
				szam_cm = szam * 100;
				szam_m.push_back(szam_cm / 100);
				break;
			}
			else if (unit == "inch") {
				szam_cm = szam * 2.54;
				szam_m.push_back(szam_cm / 100);
				break;
			}
			else if (unit == "ft") {
				szam_cm = szam * 2.54 * 100;
				szam_m.push_back(szam_cm / 100);
				break;
			}
			else if (unit == "cm") {
				szam_cm = szam;
				szam_m.push_back(szam_cm / 100);
				break;
			}
			else cout << "Wrong unit, enter egain: ";
		}
		while (be) {
			min = szam;
			be = false;
		}
		cout << szam << unit << " ";
		if (szam_cm > max) {
			max = szam_cm;
			cout << "Largest number so far." << endl;
		}
		else if (szam_cm < min) {
			min = szam_cm;
			cout << "This is the smallest number so far." << endl;
		}
		else cout << endl;
		cout << "Enter a double value: ";
		sum_m += szam_cm / 100;
		db++;
		}
	cout << endl;
	cout << "Total numbers entered : " << db << endl;
	cout << "The smallest number(in 'cm'): " << min << endl;
	cout << "The biggest number(in 'cm'): " << max << endl;
	cout << "The sum of numbers in 'm': " << sum_m << endl;
	sort(szam_m);
	for (int i = 0; i < szam_m.size(); i++)
		cout << szam_m[i] << endl;
	return 0;
}