#include <iostream>
using namespace std;

int main() {
    int season;
    cout << "������һ��1-4����������ʾ���ڣ���";
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
        cout << "��Ч������" << endl;
    }

    return 0;
}
