#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "������һ��1-100��������";
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
        cout << "��Ч������" << endl;
    }

    return 0;
}
