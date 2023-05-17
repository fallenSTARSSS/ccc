#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    int reversedNum = 0;
    int temp = num;

    while (temp > 0) {
        reversedNum = reversedNum * 10 + temp % 10;
        temp /= 10;
    }
    return num == reversedNum;
}
// 输出大于 m 且紧靠 m 的 k 个回文数
void printPalindromes(int m, int k) {
    int count = 0;
    int num = m + 1;
    while (count < k) {
        if (isPalindrome(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int m, k;
        cin >> m >> k;
        cout << "第 " << i + 1 << " 组数据的回文数为：";
        printPalindromes(m, k);
    }
    return 0;
}
