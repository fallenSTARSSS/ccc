#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n; // ���� n ��ֵ
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // ���� n ������
    }
    // ʹ�� sort �����������������
    sort(arr, arr + n);
    // �������������
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
