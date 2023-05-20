#include <iostream>
using namespace std;
int reverseInteger(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = (reversed * 10) + (num % 10); // 将最低位添加到反转数的末尾
        num /= 10; 
    }
    return reversed;
}
int main() {
    int num = 0; 
    cin >> num;
    int reversed = reverseInteger(num);
    cout  << reversed << endl;
    return 0;
}
