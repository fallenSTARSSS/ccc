#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 
    int count = 0; 
    for (int i = 0; i < n; i++) {
        int time;
        cin >> time; 
        if (time <= 0) {
            count++;
        }
    }
    if (count < k) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl; 
    }

    return 0;
}
