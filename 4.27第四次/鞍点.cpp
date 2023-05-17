#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "请输入正整数n：";
    cin >> n;

    int matrix[100][100];

    // 输入矩阵
    cout << "请输入矩阵A的元素：" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    bool hasSaddlePoint = false;
    int saddleRow, saddleCol;

    // 寻找鞍点
    for (int i = 0; i < n; i++) {
        int rowMax = matrix[i][0];
        int colMinIndex = 0;

        // 找到当前行的最大值
        for (int j = 1; j < n; j++) {
            if (matrix[i][j] > rowMax) {
                rowMax = matrix[i][j];
                colMinIndex = j;
            }
        }

        // 检查最大值是否为该列的最小值
        bool isSaddlePoint = true;
        for (int k = 0; k < n; k++) {
            if (matrix[k][colMinIndex] < rowMax) {
                isSaddlePoint = false;
                break;
            }
        }

        // 如果存在鞍点，记录位置并跳出循环
        if (isSaddlePoint) {
            hasSaddlePoint = true;
            saddleRow = i + 1;
            saddleCol = colMinIndex + 1;
            break;
        }
    }

    // 输出结果
    if (hasSaddlePoint) {
        cout << saddleRow << " " << saddleCol << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
