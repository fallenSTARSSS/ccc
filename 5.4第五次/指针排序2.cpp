#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n; // 输入 n 的值
    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 输入 n 个数字
    }
    // 使用 sort 函数对数组进行排序
    sort(arr, arr + n);
    // 输出排序后的数组
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
