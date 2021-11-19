//9.4.1
#include "std_lib_facilities.h"

struct Date {
int y; 
int m; 
int d; 
};

void init_day(Date& dd, int y, int m, int d){
	if(y <= 0)return error("invalid year");
	if(m > 12 || m < 1)error("invalid month");
	if(d > 31)error("invalid day");
	dd.y = y;
	dd.m = m;
	dd.d = d;
}

void add_day(Date& dd, int n){
	dd.d += n;
	if(dd.d >31){
	   dd.d -= 31;
	   dd.m++;
	}
	if(dd.m > 12){dd.y++; dd.m-=12;}
}


int main(){
try{

Date today;
init_day(today, 1978, 6, 25);
cout << today.y << "." << today.m << "." << today.d << endl;
Date tomorrow;
init_day(tomorrow, 1978, 6, 25);
add_day(tomorrow, 1);
cout << tomorrow.y << "." << tomorrow.m << "." << tomorrow.d << endl;

return 0;
}

catch(exception& e){
	cerr << e.what() << endl;
return 1;
}
}
