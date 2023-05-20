#include <iostream>
using namespace std;

int main() {
    char c;
    int wordLength = 0;
    while (cin.get(c)) {
        if (c == ' ' || c == '.') {
            if (wordLength > 0) {
                cout << wordLength << ' ';
                wordLength = 0;
            }
            if (c == '.')
                break;
        }
        else {
            wordLength++;
        }
    }
    return 0;
}
