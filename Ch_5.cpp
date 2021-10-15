#include "std_lib_facilities.h" 

int main()
try {
	cout << "Success! \n";																	//Cout << "Success!\n";
	cout << "Success !\n";																	//cout << "Success !\n;   
	cout << "Success!" << endl;																//cout << "Success" << !\n"   
	cout << "success" << endl;																//cout << success << endl;   
	int res = 7; vector<int> v(10); v[5]= res; cout << "Success!\n";						//string res = 7; vector<inl> v(10); v[S] = res; cout << "Success!\n";		
	vector<int> v(10); v[5] = 7; if (v[5] == 7) cout << "Success!\n";						//vector<inl> v(10); v(S) = 7; if (v(5) != 7) cout << "Success!\n";		
	bool cond = true; if (cond) cout << "Success!\n"; else cout << "Fail\n";				//if (cond) cout << "Success!\n"; else cout << "Fail!\n";
	bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";						//bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";	
	string s = "ape" ; bool c = true ; if (c) cout << "Success!\n";							//string s =  "ape " ;   boo  c =  "fool"<s;  i f   (c)  cout <<  " S uccess!\n ";		
	string s = "fool"; if (s == "fool") cout << "Success!\n";								//string s = "ape"; if (s=="fool") cout << "Success!\n"; 
	string s = "ape"; if (s == "ape") cout << "Success!\n";									//string s =  "ape " ;   if (s=="foo l") cout << " S uccess !\n " ;   	
	string s = "ape"; if (s != "fool ") cout << "Success!\n";								//string s =  "ape" ;  i f   (s=="foo l") cout <  "Success!\n " ;   	
	vector<char> v(5); for (int i = 0; i < v.size(); ++i); cout << "Success!\n";			//vector<char> v(S); for  (int i=O;  O<v. size();  ++i) ;  cout <<  " S uccess !\n " ;   	
	vector<char> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n";			//vector<char> v(S);  for  (int i=O;  i<=v.size();  ++i)  ;  cout <<  " S uccess !\n " ;  	 
	string s = "Success!\n"; for (int i = 0; i < 9; ++i) cout << s[i];						//string s =   "Success!\n " ;   for  (int  i=O; i<6; ++i) cout <<  s[i]; 	
	if (true)  cout << "Success!\n"; else cout << "Fail!\n";								//if (true) then cout << " Success!\n" ;   else cout << "Fail!\n"; 	 
	int x = 2000; int c = x; if (c == 2000) cout << "Success!\n";							//int x = 2000; char c =  x ;   i f   (c==2000) cout <<  " S uccess!\n " ;   
	string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];						//string s =  "Success !\n ";  for  (int i=O;  i<10;  ++i) cout <<  s[i] ; 
	  vector <int> v(5); for (int i = 0; i <= v.size(); ++i); cout << "Success!\n";			//ector v(S);  for  (int i=O;  i<=v.size();  ++i)  ;  cout <<  " S uccess !\n " ;
	int i = 0; int j = 9; while (i < 10) i++; if (j < i) cout << "Success!\n";				//i n t  i =O ;  i n t   j = 9; while (i<10)  ++j;  i f   (j<i)  cout <<  "Success !\n " ;   
	int x = 3; double d = 5 / (x - 2); if (d == 2 * x - 1) cout << "Success!\n";			//i n t x = 2; double d =   5/(x-2);  if (d==2*x+0.5) cout <<  " S uccess!\n " ;   
	 string s = "Success!\n"; for (int i = 0; i < 10; ++i) cout << s[i];					//string<char>  s =  " S uccess !\n " ;   fo r ( i n t  i=O;  i<=10;  ++i) cout <<  s[i];
	int i = 0; int j = 9; while (i < 10) i++; if (j < i) cout << "Success!\n";				// int i=O; while (i<10) ++j;  if (j<i)  cout <<  " S uccess !\n " ;    
	int x = 4; double d = 5 / (x - 2); if (d = 2 * x + 0.5 -6) cout << "Success!\n";		//i n t   x  = 4; double d = 5/(x-2);  if (d=2*x+0.5)  cout <<  " S uccess!\n " ;  
	cout << "Success!\n";																	//cin << "Success!\n";
	keep_window_open();		
	return 0;
    }

	catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
	}

	catch (...) {
	cerr << "Oops: unknown exception !\n";
	keep_window_open();
	return 2;
	}
	
