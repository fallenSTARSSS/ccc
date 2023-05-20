#include <iostream>
using namespace std;
void moveDisk(int disk, char source, char dest) {
    cout << "Move disk " << disk << " from " << source << " to " << dest << endl;
}

void hanoi(int n, char source, char temp, char dest) {
    if (n == 1) {
        moveDisk(1, source, dest);
    }
    else {
        hanoi(n - 1, source, dest, temp);
        moveDisk(n, source, dest);
        hanoi(n - 1, temp, source, dest);
    }
}
int main() {
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}
