#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, h, x, y, s, p;
    int n, i;
    cout << "Enter a, b, h, n" << endl;
    cin >> a >> b >> h >> n;
    x = a;
    do {
        p=s=1;
        for (i=1; i<=n; i++) {
            p *= log(9) * x / i;
            s += p;
        }
        y = pow(9, x);
        cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
        x += h;
    }
    while (x <= b + h / 2);
    cout << endl;
    return 0;
}

