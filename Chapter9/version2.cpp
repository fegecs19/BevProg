//9.4.2
#include "std_lib_facilities.h"


struct Date {
	int year, month, day;
	Date(int y, int m, int d);
	void add_day(int n);
};

Date::Date(int y, int m, int d){
	if(y <= 0) error("invalid year");
	if(m > 12 || m < 1)error("invalid month");
	if(d > 31)error("invalid day");
	year = y;
	month = m;
	day = d;
}

void Date::add_day(int n){
	day += n;
	if(day>31){
	   day-=31;
	   month++;
	}
	if(month > 12){
	   month-=12;
	   year++;
	}
}


int main()
try{
	
	Date today(1978, 6, 25);
	cout << today.year << "." << today.month << "." << today.day << "." << endl;
	Date tomorrow(1978, 6, 25);
	tomorrow.add_day(1);
	cout << tomorrow.year << "." << tomorrow.month << "." << tomorrow.day << "." << endl;
	
return 0;
}catch(exception& e){
cerr << e.what() << endl;
return 1;
}
