#include <iostream>
using namespace std;
void printYanghuiTriangle(int num) {
    int triangle[15][15];
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            }
            else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    for (int i = 0; i < num; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int num;
    cin >> num;
    printYanghuiTriangle(num);

    return 0;
}
