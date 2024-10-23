#include <iostream>
#include <cmath>
using namespace std;

double t(const double x) {
    if (abs(x) >= 1) {
        return (cos(x) + 1) / (exp(x) + pow(sin(x), 2));
    }
    else {
        double sum = 0;
        for (int j = 0; j <= 5; j++) {
            sum += pow(-1, j) * pow(x, 2 * j + 1) / tgamma(2 * j + 2);
        }
        return sum;
    }
}

int main() {
    double fpoch, fkin;
    int n;

    cout << "fpoch = "; cin >> fpoch;
    cout << "fkin = "; cin >> fkin;
    cout << "n = "; cin >> n;

    double df = (fkin - fpoch) / n;
    double f = fpoch;

    cout << "f\t" << "" << endl;

    for (int i = 0; i <= n; i++) {
        double result = t(pow(f, 2)) + 2 * t(2 * f + 1) + sqrt(t(1));
        cout << f << "\t" << result << endl;
        f += df;
    }

    return 0;
}