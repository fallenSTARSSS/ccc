#include <iostream>
#include <string>

using namespace std;
string wordToNumber(string word) {
    string number;
    for (char c : word)//�������word ��һ���ַ��������ַ���ɡ�ͨ��ʹ�÷�Χ����ѭ�������ǿ��Ա����ַ����е�ÿ���ַ����������θ�ֵ������ c��ѭ�����Զ����� word �е������ַ���ֱ�������������ַ�Ϊֹ����
    {
        if (c >= 'A' && c <= 'Z') { // �������д��ĸ
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
