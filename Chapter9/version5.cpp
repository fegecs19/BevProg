//9.7.4
#include "std_lib_facilities.h"

class Date {
public:
	enum Month {
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} ;

	int day() const {return d;}
	Month month() const {return m;}
	int year() const {return y;}
	
	void add_day(int n);
	void add_month(int n);
	void add_year(int n);
	Date(int y, Month m, int d);

	
private:
	int y;
	Month m;
	int d;
} ;

Date::Date(int yy, Month mm, int dd){
	if(yy <= 0)error("invalid year");
	else if(int(mm) > 12 || int(mm) < 1)error("invalid month");
	else if(dd > 31 || dd < 1)error("invalid day");
	else {
		y = yy;
		m = mm;
		d = dd;
	}
}

void Date::add_day(int n){
	d += n;
	int x;
	if(d > 31){
		d-=31;
		x = int(m) + 1;
	
	if(x>12){
		x-=12;
		m = Month(x);
		y++;
	}
	else m = Month(x);
	}
}

void Date::add_year(int n){
	d += n;
}

void Date::add_month(int n){
	int x = int(m) + n;
	if(x > 12){
		x-= 12;
		m = Month(x);
	}
}

ostream& operator<<(ostream& os, const Date& d){
	return os << "(" << d.year() 
				 << "," << int(d.month()) 
				 << "," << d.day() 
				 << ")" << endl;
}
int main()
try{

	Date today(1978, Date::jun,25);
	Date tomorrow(today);
	cout << today;
	tomorrow.add_day(1);
	cout << tomorrow;

	return 0;
}catch(exception& e){
	cerr << e.what() << endl;
	return 1;
}
