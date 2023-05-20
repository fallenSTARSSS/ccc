#include <iostream>
using namespace std;

int mystrstr(char* all, char* b) {
    int i, j, k;
    int len1 = 0, len2 = 0;

    // 计算字符串长度
    while (all[len1] != '\0') {
        len1++;
    }
    while (b[len2] != '\0') {
        len2++;
    }

    for (i = 0; i <= len1 - len2; i++) {
        j = 0;
        k = i;

        // 逐个字符比较
        while (b[j] != '\0' && all[k] == b[j]) {
            j++;
            k++;
        }

        // 如果找到完整匹配的子串，返回下标
        if (b[j] == '\0') {
            return i;
        }
    }

    // 没有找到匹配的子串，返回 -1
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
