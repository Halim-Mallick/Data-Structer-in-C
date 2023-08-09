#include <iostream>
#include <iomanip> // For formatting output
using namespace std;

double func(double x) {
    return x * x * x - x - 1;
}

double derivative(double x) {
    return 3 * x * x - 1;
}

double e = 0.001;
double c;

void newtonRaphson(double x0) {
    int i = 1;

    while (true) {
        cout << "Iteration " << i << ":" << endl;
        cout << "x = " << x0 << endl;

        // Set the precision for f(x) and f'(x)
        cout.precision(5);
        cout << "f(x) = " << func(x0) << endl;
        cout << "f'(x) = " << derivative(x0) << endl;

        c = x0 - func(x0) / derivative(x0);

        cout << "x = " << c << endl;
        cout << "f(x) = " << func(c) << endl;
        cout << endl;

        if (abs(func(c)) < e)
            break;

        x0 = c;
        i++;
    }

    cout << "Accurate Root calculated is " << c << endl;
}

int main() {
    double x0 = 2; // Initial guess

    cout << "The function used is f(x) = x^3 - x - 1" << endl;
    cout << "Initial guess x0 = " << x0 << endl << endl;

    newtonRaphson(x0);

    return 0;
}
