// Lab_04_2.cpp
// Катерина Шклярук
// Лабораторна робота № 4.2
// Табулювання функції
// Варіант 31

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double x, xp, xk, dx, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "--------------------------------" << endl;
    cout << "|" << setw(8) << "x"
        << " |" << setw(12) << "y" << " |" << endl;
    cout << "--------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x <= -1)
            y = 2 * fabs(13 - x) - exp(fabs(x - 5));
        else
            if (x < 1)
                y = 2 * fabs(13 - x)
                - pow(sin(pow(x, 3)), 2) + 1;
            else
                y = 2 * fabs(13 - x)
                - cos(fabs(x)) / (1 + pow(sin(x), 2));

        cout << "|" << setw(8) << setprecision(2) << x
            << " |" << setw(12) << setprecision(3) << y
            << " |" << endl;

        x += dx;
    }

    cout << "--------------------------------" << endl;

    return 0;
}