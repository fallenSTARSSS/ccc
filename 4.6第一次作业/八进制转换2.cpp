#include <iostream>
using namespace std;
void convertToOctal(int n) {
    if (n == 0) {
        cout << "��Ӧ��8������Ϊ��0" << endl;
        return;
    }

    int octal[32];
    int index = 0;

    while (n > 0) {
        octal[index] = n % 8;
        n /= 8;
        index++;
    }

    cout << "��Ӧ��8������Ϊ��";
    for (int i = index - 1; i >= 0; i--) {
        cout << octal[i];
    }

    cout << endl;
}

int main() {
    int n;
    cout << "������һ��������";
    cin >> n;
    convertToOctal(n);
    return 0;
}