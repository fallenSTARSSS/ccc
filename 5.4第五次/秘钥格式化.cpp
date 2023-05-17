#include <iostream>
#include <string>
using namespace std;
string reformatString(string s, int k) {
    string formattedString;
    int count = 0; 
    for (char c : s) {
        if (isalnum(c)) { // 如果字符是字母或数字
            formattedString += toupper(c); // 将小写字母转换为大写字母
            count++;

            if (count == k) { // 达到分组字符个数上限
                formattedString += '-';
                count = 0;
            }
        }
    }
    // 移除最后一个分组末尾的破折号
    if (!formattedString.empty() && formattedString.back() == '-') {
        formattedString.pop_back();
    }
    return formattedString;
}
int main() {
    string s;
    int k;
    cin >> s >> k;
    string formattedString = reformatString(s, k);
    cout << formattedString << endl;
    return 0;
}
