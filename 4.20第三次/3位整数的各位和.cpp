#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "请输入一个三位十进制整数：";
    cin >> number;

    int digit1 = number / 100;       // 百位数
    int digit2 = (number % 100) / 10; // 十位数
    int digit3 = number % 10;        // 个位数

    int sum = digit1 + digit2 + digit3;
    cout << "各位数值的和为：" << sum << endl;

    return 0;
}
