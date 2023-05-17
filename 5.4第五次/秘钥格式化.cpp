#include <iostream>
#include <string>
using namespace std;
string reformatString(string s, int k) {
    string formattedString;
    int count = 0; 
    for (char c : s) {
        if (isalnum(c)) { // ����ַ�����ĸ������
            formattedString += toupper(c); // ��Сд��ĸת��Ϊ��д��ĸ
            count++;

            if (count == k) { // �ﵽ�����ַ���������
                formattedString += '-';
                count = 0;
            }
        }
    }
    // �Ƴ����һ������ĩβ�����ۺ�
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
