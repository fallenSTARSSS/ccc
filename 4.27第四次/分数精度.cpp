#include<iostream>
using namespace std;
class counts {
public:int count(int a,int b) {
	int o = 0;
	int p = 0;
	for (int j = 0; p != 0; j++) {
		o = a / b;
		p = a % b;
		if (p != 0) {
			if (j == 0) {
				cout << "0." << o;
			}
			else cout << o;
		}
		else cout << o << endl;
	}
	a = o * 10;
	    
	}
};
int main() {
	int a, b;
	char c;
	cin >> a >>c>>b;
	counts d;
	d.count(a, b);
}
