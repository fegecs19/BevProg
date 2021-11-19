//9.4.3
#include "std_lib_facilities.h"

class Date {
private:
	int y, m, d;
public:
	Date(int Y, int M, int D);
	void add_day(int n);
	int month() { return m; }
	int day() { return d; }
	int year() { return y; }
};

Date::Date(int Y, int M, int D){
	if(Y <= 0) error("invalid year");
	if(M > 12 || M < 1)error("invalid month");
	if(D > 31)error("invalid day");
	y = Y;
	m = M;
	d = D;
}

void Date::add_day(int n){
	d += n;
	if(d>31){
	   d-=31;
	   m++;
	}
	if(m > 12){
	   m-=12;
	   y++;
	}
}

int main()
try{

	Date today(1978, 6, 25);
	cout << today.year() << "." << today.month() << "." << today.day() << "." << endl;
	Date tomorrow(1978, 6, 25	);
	tomorrow.add_day(1);
	cout << tomorrow.year() << "." << tomorrow.month() << "." << tomorrow.day() << "." <<endl;
	

return 0;
}catch(exception& e){
cerr << e.what() << endl;
return 1;
}
