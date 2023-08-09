#include <iostream>
#include <cmath>

using namespace std;

double func(double x) {
    return x * x * x - x - 1;
}

double derivative(double x) {
    return 3 * x * x - 1;
}

double accuracy = 0.00001;

double newtonRaphson(double a, double b) {
    double x0 = (a + b) / 2;

    while (true) {
        double f_x0 = func(x0);
        double f_prime_x0 = derivative(x0);

        double x1 = x0 - f_x0 / f_prime_x0;

        if (fabs(func(x1)) <= accuracy) {
            return x1; // Found root within desired accuracy
        }

        x0 = x1;
    }
}

int main() {
    double a, b;

    cout << "Enter interval [a, b] such that f(a) * f(b) < 0: ";
    cin >> a >> b;

    if (func(a) * func(b) >= 0) {
        cout << "Invalid interval. Please choose a different interval." << endl;
    } else {
        double root = newtonRaphson(a, b);
        cout << "Approximate root: " << root << endl;
    }

    return 0;
}
