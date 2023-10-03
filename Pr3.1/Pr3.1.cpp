#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double e; // проміжний результат - функціонально змінна частина виразу
    cout << "x = "; cin >> x;

    e = x * x;
    // спосіб 1: розгалуження в скороченій формі
    if (x < 0)
        y = 1 + 4 * pow(x, 2);  //1+ 4* х * х
    else if (0 <= x && x <= 2)
        y = pow(exp(x) + abs(x), 2);
    else if (x > 2)
        y = sin(5) * (x * x + 1);
    y = 2 / x + abs(x);
    cout << endl;
    cout << "1) y = " << y << endl;
    // спосіб 2: розгалуження в повній формі
    if (x < 0)
        y = 1 + 4 * pow(x, 2);
    else 
        if (0 <= x && x <= 2)
            y = pow(exp(x) + abs(x), 2);
        else
            y = sin(5) * (x * x + 1);
    y = 2 / x + abs(x); 
    cout << "2) y = " << y << endl;
    cin.get();
    return 0;
}

