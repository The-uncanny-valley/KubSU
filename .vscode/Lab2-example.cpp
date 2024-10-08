#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double x,y,f,a,s;
int k;
cout << "x "; cin >> x;
cout << "y "; cin >> y;
cout << "f: 1 - sh(x), 2 - x^2, 3 – exp(x) "; cin >> k;
switch(k)
{
case 1: f = sinh(x); break;
case 2: f = pow(x, 2); break;
case 3: f = exp(x); break;
default: cout << "Function not chosen"; return 1;
}
a=fabs(x * y);
if (a < 5) {
cout << "No result" << endl;
return 1;
} else
if (a > 10) s = fabs(f) + log(y);
else
if (a <= 10 && a > 5) s = exp(f + y);
else s = sin(x) + tan(y);
cout << "RESULT = " << s << endl;
return 0;
}