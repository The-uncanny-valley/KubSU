// Lab-1-semester-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// 1 �������
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

