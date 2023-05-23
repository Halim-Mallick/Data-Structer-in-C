#include <iostream>
#include <iomanip> //For formatting output
using namespace std;

double func(double x) {
    return x * x * x - x - 1;
}

double e = 0.001;
double c;

void bisection(double a, double b) {
    if (func(a) * func(b) >= 0) {
        cout << "Incorrect value of a and b, Please Take next value" << endl;
        return;
    }
    
    int i = 1;
    double m = (a + b) / 2;

    while (abs(func(m)) >= e) {
        cout << "Iteration " << i << ":" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;

        // Set the precision for f(a) and f(b)
        cout.precision(5);
        cout << "f(a) = " << func(a) << endl;
        cout << "f(b) = " << func(b) << endl;

        c = (a + b) / 2;
        m = c;

        if (func(c) == 0.0) {
            cout << "c = " << c << endl;
            cout << "f(c) = " << func(c) << endl;
            break;
        } else if (func(c) * func(a) < 0) {
            cout << "c = " << c << endl;
            cout << "f(c) = " << func(c) << endl;
            b = c;
            cout << "b = c" << endl;
        } else {
            cout << "c = " << c << endl;
            cout << "f(c) = " << func(c) << endl;
            a = c;
            cout << "a = c" << endl;
        }
        i++;
        cout << endl;
    }
    cout << "Accurate Root calculated is " << c << endl;
}

int main() {
    double a = 1;
    double b = 2;

    cout << "The function used is f(x) = x^3 - x - 1" << endl;
    cout << "Initial a = " << a << endl;
    cout << "Initial b = " << b << endl << endl;

    bisection(a, b);

    return 0;
}
