// Lab-1-semester-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// 1 задание
int main()
{
    double x, y, z, a, b, c, s;
    std::cout << "x:";
    std::cin >> x;
    std::cout << "y:";
    std::cin >> y;
    std::cout << "z:";
    std::cin >> z;
    a = 2 * cos(x - 2 / 3.0);
    b = 1 / 2.0 + sin(y) * sin(y);
    c = 1 + pow(z, 2) / (3 - pow(z, 2) / 5);
    s = a / b * c;
    std::cout << "Result s=" << s << std::endl;
}

/* 17 задание
int main()
{
    double x, y, z, a, b, c, s;
    std::cout << "x:";
    std::cin >> x;
    std::cout << "y:";
    std::cin >> y;
    std::cout << "z:";
    std::cin >> z;
    a = y + pow(x - 1, 1 / 3.0);
    b = pow(a, 1 / 4.0);
    c = fabs(x - y) * (sin(z) * sin(z) + tan(z));
    s = b / c;
    std::cout << "Result s=" << s << std::endl;
}

// 2 задание
/*
using namespace std;

int main()
{
    double x, y, z, a, b, c, s;
    cout << "x:";
    cin >> x;
    cout << "y:";
    cin >> y;
    cout << "z:";
    cin >> z;
    a = pow(9 + pow(x - y, 2), 1 / 3.0);
    b = x * x + y * y + 2;
    c = exp(fabs(x - y)) * pow(tan(z), 3);
    s = a / b - c;
    cout << s << endl;
    return 0;
}
*/