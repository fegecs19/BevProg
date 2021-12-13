#include "std_lib_facilities.h"

class Int {
    int val;
public:
    Int() : val(0) { }                      
    Int(const Int& arg) : val(arg.val) { }  
    Int(int v) : val(v) { }                 
    Int& operator=(const Int& v) { val = v.val; return *this; }   
    int get() const { return val; }
};

Int operator+(const Int& v1, const Int& v2)
{
    return Int(v1.get() + v2.get());
}

Int operator-(const Int& v1, const Int& v2)
{
    return Int(v1.get() - v2.get());
}

Int operator*(const Int& v1, const Int& v2)
{
    return Int(v1.get() * v2.get());
}

Int operator/(const Int& v1, const Int& v2)
{
    return Int(v1.get() / v2.get());
}

ostream& operator<<(ostream& os, const Int& d)
{
    os << d.get();
    return os;
}

int main()
try {
    Int i1;
    Int i2 = 2;
    Int i3(i2);
    Int i4;
    i4 = i2;
    Int i5 = 6;
    cout << "i1: " << i1 << "\n";
    cout << "i2: " << i2 << "\n";
    cout << "i3: " << i3 << "\n";
    cout << "i4: " << i4 << "\n";
    cout << "i5: " << i5 << "\n";
    cout << "i2 + i5 = " << i2+i5 << "\n";
    cout << "i5 - i2 = " << i5-i2 << "\n";
    cout << "i2 * i5 = " << i2*i5 << "\n";
    cout << "i5 / i2 = " << i5/i2 << "\n";
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
