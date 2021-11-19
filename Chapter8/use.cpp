#include "my.h"
#include "my.cpp"


int main(){
	foo = 7;
	int asd = 99;
	print_foo();
	print(asd);
	
	
	print(0);
	
	int x = 7;			
	int y =9;
	print(x); print(y);
	swap_v(x,y); 
	print(x); print(y);
	swap_v(7,9);	
	print(x); print(y);

	print(0);

	const int cx = 7;		
	const int cy = 9;	
	print(cx); print(cy);
	swap_v(cx,cy);		
	print(cx); print(cy);
	swap_v(7.7,9.9);	
	print(cx); print(cy);


	print(0);

	double dx = 7.7;	
	double dy = 9.9;	
	print(dx); print(dy);
	swap_v(dx,dy);		
	print(dx); print(dy);
	swap_v(dx,dy);		
	print(dx); print(dy);
	return 0;
}
