#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "������һ����λʮ����������";
    cin >> number;

    int digit1 = number / 100;       // ��λ��
    int digit2 = (number % 100) / 10; // ʮλ��
    int digit3 = number % 10;        // ��λ��

    int sum = digit1 + digit2 + digit3;
    cout << "��λ��ֵ�ĺ�Ϊ��" << sum << endl;

    return 0;
}
