#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data[6];
        cout << "请输入第 " << (i + 1) << " 组数据（6个整数，用空格隔开）：";
        for (int j = 0; j < 6; j++) {
            cin >> data[j];
        }
        // 计算平均值
        int sum = 0;
        for (int j = 0; j < 6; j++) {
            sum += data[j];
        }
        double average = static_cast<double>(sum) / 6;
        // 计算方差
        double variance = 0;
        for (int j = 0; j < 6; j++) {
            variance += (data[j] - average) * (data[j] - average);
        }
        variance /= 6;
        cout.precision(2);
        cout << "第 " << (i + 1) << " 组数据的平均值为：" << fixed << average << endl;
        cout << "第 " << (i + 1) << " 组数据的方差为：" << fixed << variance << endl;
    }
    return 0;
}
