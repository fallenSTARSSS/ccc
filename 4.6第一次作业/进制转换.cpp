#include <iostream>
using namespace std;
void convertToBase(int num, int base) {
    if (num == 0) {
        cout << 0 << endl;
        return;
    }

    int digits[32]; 
    int index = 0;
    while (num > 0) {
        digits[index] = num % base; 
        num /= base; 
        index++;
    }
    for (int i = index - 1; i >= 0; i--) {
        cout << digits[i];
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        convertToBase(a, b);
    }

    return 0;
}






