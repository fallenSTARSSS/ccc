#include <iostream>
using namespace std;

int main() {
    int season;
    cout << "请输入一个1-4的整数（表示季节）：";
    cin >> season;

    if (season == 1) {
        cout << "Spring" << endl;
    }
    else if (season == 2) {
        cout << "Summer" << endl;
    }
    else if (season == 3) {
        cout << "Autumn" << endl;
    }
    else if (season == 4) {
        cout << "Winter" << endl;
    }
    else {
        cout << "无效的输入" << endl;
    }

    return 0;
}
