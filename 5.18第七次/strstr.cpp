#include <iostream>
using namespace std;

int mystrstr(char* all, char* b) {
    int i, j, k;
    int len1 = 0, len2 = 0;

    // �����ַ�������
    while (all[len1] != '\0') {
        len1++;
    }
    while (b[len2] != '\0') {
        len2++;
    }

    for (i = 0; i <= len1 - len2; i++) {
        j = 0;
        k = i;

        // ����ַ��Ƚ�
        while (b[j] != '\0' && all[k] == b[j]) {
            j++;
            k++;
        }

        // ����ҵ�����ƥ����Ӵ��������±�
        if (b[j] == '\0') {
            return i;
        }
    }

    // û���ҵ�ƥ����Ӵ������� -1
    return -1;
}

int main() {
    char all[501];
    char b[501];

    cin.getline(all, 501);
    cin.getline(b, 501);

    int index = mystrstr(all, b);
    cout << index << endl;

    return 0;
}
