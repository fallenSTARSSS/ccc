#include <iostream>
using namespace std;
double myPow(double x, int n) {
    if (n == 0)
        return 1.0;
    double result = 1.0;
    double base = x;
    bool isNegative = false;

    if (n < 0) {
        isNegative = true;
        n = -n;
    }
    while (n > 0) {
        if (n % 2 == 1)
            result *= base;
        base *= base;
        n /= 2;
    }
    return isNegative ? 1.0 / result : result;
}
int main() {
    double x;
    int n;
    cin >> x >> n;
    double result = myPow(x, n);
    cout << result << endl;
    return 0;
}
