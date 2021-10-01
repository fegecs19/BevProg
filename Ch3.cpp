#include "std_lib_facilities.h"

int main() {
	cout << "Enter the name of the person you want to write to: ";
	
	string nev;
	cin >> nev;
	cout << "Dear " << nev << endl;
	cout << "How are you? I am fine. I miss you" << endl;
	cout << "I heard you have a new job, how's it going so far?" << endl;

	string friend_name;

	cout << "Your friends name: ";
	cin >> friend_name;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	char friend_sex = '0';
	cout << "(m/f): ";
	cin >> friend_sex;

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me." << endl;

	cout << "Enter age: ";
	int age;
	cin >> age;
	if (age >= 110 || age <= 0)
		cout << "error (you are kidding!)" << endl;
	else
		cout << "I heard you just had a birthday party and you are " << age << " years old" << endl;

	if (age < 12)
		cout << "Next year you will be " << age++ << endl;
	else if (age == 17)
		cout << "Next year you will be able to vote." << endl;
	else if (age > 70)
		cout << "I hope you are enjoying your retirement." << endl;

	cout << "Yours sincerely" << endl;
	cout << endl;
	cout << endl;
	cout << "Gábor";
	return 0;
}