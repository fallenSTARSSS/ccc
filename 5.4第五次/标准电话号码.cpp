#include <iostream>
#include <string>

using namespace std;
string wordToNumber(string word) {
    string number;
    for (char c : word)//（在这里，word 是一个字符串，由字符组成。通过使用范围基于循环，我们可以遍历字符串中的每个字符，将其依次赋值给变量 c。循环会自动遍历 word 中的所有字符，直到遍历完所有字符为止。）
    {
        if (c >= 'A' && c <= 'Z') { // 仅处理大写字母
            if (c <= 'C') {
                number += '2';
            }
            else if (c <= 'F') {
                number += '3';
            }
            else if (c <= 'I') {
                number += '4';
            }
            else if (c <= 'L') {
                number += '5';
            }
            else if (c <= 'O') {
                number += '6';
            }
            else if (c <= 'S') {
                number += '7';
            }
            else if (c <= 'V') {
                number += '8';
            }
            else if (c <= 'Z') {
                number += '9';
            }
        }
    }
    return number;
}

int main() {
    string word;
    cin >> word;

    string number = wordToNumber(word);
    cout << number << endl;

    return 0;
}
