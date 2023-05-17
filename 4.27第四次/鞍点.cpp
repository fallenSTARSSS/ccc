#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "������������n��";
    cin >> n;

    int matrix[100][100];

    // �������
    cout << "���������A��Ԫ�أ�" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool hasSaddlePoint = false;
    int saddleRow, saddleCol;

    // Ѱ�Ұ���
    for (int i = 0; i < n; i++) {
        int rowMax = matrix[i][0];
        int colMinIndex = 0;

        // �ҵ���ǰ�е����ֵ
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
                colMinIndex = j;
            }
        }

        // ������ֵ�Ƿ�Ϊ���е���Сֵ
        bool isSaddlePoint = true;
        for (int k = 0; k < n; k++) {
            if (matrix[k][colMinIndex] < rowMax) {
                isSaddlePoint = false;
                break;
            }
        }

        // ������ڰ��㣬��¼λ�ò�����ѭ��
        if (isSaddlePoint) {
            hasSaddlePoint = true;
            saddleRow = i + 1;
            saddleCol = colMinIndex + 1;
            break;
        }
    }

    // ������
    if (hasSaddlePoint) {
        cout << saddleRow << " " << saddleCol << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
