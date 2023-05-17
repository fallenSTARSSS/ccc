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
// ������� m �ҽ��� m �� k ��������
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
        cout << "�� " << i + 1 << " �����ݵĻ�����Ϊ��";
        printPalindromes(m, k);
    }
    return 0;
}
