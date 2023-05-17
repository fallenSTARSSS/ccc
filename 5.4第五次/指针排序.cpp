#include <iostream>
using namespace std;
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cin >> n; 
    int arr[1000];
    for (int i = 0; i < n; i++) {
       cin >> arr[i]; 
    }
    // 使用排序函数对数组进行排序
    sortArray(arr, n);

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
