#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int data[6];
        cout << "������� " << (i + 1) << " �����ݣ�6���������ÿո��������";
        for (int j = 0; j < 6; j++) {
            cin >> data[j];
        }
        // ����ƽ��ֵ
        int sum = 0;
        for (int j = 0; j < 6; j++) {
            sum += data[j];
        }
        double average = static_cast<double>(sum) / 6;
        // ���㷽��
        double variance = 0;
        for (int j = 0; j < 6; j++) {
            variance += (data[j] - average) * (data[j] - average);
        }
        variance /= 6;
        cout.precision(2);
        cout << "�� " << (i + 1) << " �����ݵ�ƽ��ֵΪ��" << fixed << average << endl;
        cout << "�� " << (i + 1) << " �����ݵķ���Ϊ��" << fixed << variance << endl;
    }
    return 0;
}
