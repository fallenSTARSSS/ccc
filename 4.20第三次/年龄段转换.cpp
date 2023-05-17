#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "请输入一个1-100的整数：";
    cin >> number;

    if (number >= 1 && number <= 10) {
        cout << "Children" << endl;
    }
    else if (number >= 11 && number <= 20) {
        cout << "Teenagers" << endl;
    }
    else if (number >= 21 && number <= 40) {
        cout << "Youth" << endl;
    }
    else if (number >= 41 && number <= 50) {
        cout << "Middle-aged" << endl;
    }
    else if (number >= 51 && number <= 80) {
        cout << "Elderly" << endl;
    }
    else if (number >= 81 && number <= 100) {
        cout << "Old man" << endl;
    }
    else {
        cout << "无效的输入" << endl;
    }

    return 0;
}
