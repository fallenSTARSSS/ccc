#include<iostream>
using namespace std;
int main() {
	int i = 1;
	int count[100] = { 0 };
	int count2[100] = { 0 };
	int count3[100] = { 0 };
	for (; i != 0;) {
		i = 0;
		cin >> i;
		cin >> count[i];
	};
	i = 1;
	for (; i != 0; ) {
		i = 0;
		cin >> i;
		cin >> count2[i];
	};
	for (i = 99; i > 0; i--) {
		count3[i] = count2[i] + count[i];
		if (count3[i] != 0) {
			if (i != 0) {
				if (i != 1) {
					cout << count3[i] << "x" << i << "+";
				}
				else cout << count3[i] << "x" << i;
			}
			else cout << count3[i] << endl;
		}
	}
	return 0;
}