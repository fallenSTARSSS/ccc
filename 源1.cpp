#include<iostream>
using namespace std;
class evens {
public:int even(int n) {
	int count = 0;

	if (n % 2 == 1) {
		count = count + n;
	}
}
};
int main() {
	evens a;
	int count1 = 0;
	for (int n = 1; n > 0;) {
		cin >> n;
		if (n > 0) {
			a.even(n);
			count1 = a.even(n) + count1;
		}
		else break;
	}
	cout << count1 << endl;
}