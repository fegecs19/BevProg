//9.7.1
#include "std_lib_facilities.h"

class Date {
public:
	enum Month {
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} ;
	Date(int y, Month m, int d);
	void add_day(int n);
	int get_year() const {return year;}
	int get_day() const {return day;}
	Month get_month() const {return month;}
private:
	int year;
	Month month;
	int day;
};

Date::Date(int y, Month m, int d){
	if(y <= 0)error("invalid year");
	else if(int(m) > 12 || int(m) < 1)error("invalid month");
	else if(d > 31 || d < 1)error("invalid day");
	else {
		year = y;
		month = m;
		day = d;
	}
}

void Date::add_day(int n){
	day += n;
	int x;
	if(day > 31){
		day-=31;
		int x = int(month) + 1;
	}
	if(x>12){
		month = Month::jan;
		year++;
	}
}

ostream& operator<<(ostream& os, const Date& d){
	return os << "(" << d.get_year() << "," << int(d.get_month()) << "," << d.get_day() << ")" << endl;
}

int main()
try{

	Date today(1978, Date::jun, 25);
	Date tomorrow (today);
	cout << today;
	tomorrow.add_day(1);
	cout << tomorrow;

	return 0;
}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}