#include <iostream>
#include<string>
using namespace std;
int main() {
    string str1, str2;
    getline(cin, str1); // 读取第一个字符串
    getline(cin, str2); // 读取第二个字符串

    int len1 = str1.length();
    int len2 = str2.length();

    bool found = false;
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (str2[i + j] != str1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << endl;

    return 0;
}
