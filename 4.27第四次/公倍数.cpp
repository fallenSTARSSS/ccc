#include<iostream>
using namespace std;
class judge {
	
public:
	judge() {};
	int so(int a, int b) {
		int n = 0;
		int x = 0;
		if (a < b) x = a;
		else x = b;
		for (int i = 0; i < x; i++) {
			if (a% i == 0 && b %i== 0) {
				n = i;
			}
		}
		return n;
	}
	int add(int a, int b) {
		int m = 0;
		int x = 0;
		if (a > b) x = a;
		else x = b;
		for (int i = x; ; i++) {
			if (i % a == 0 && i % b == 0) {
				m = i;
			}
		}
		return m;
	}

};
int main() {
	int a, b;
	judge g;
	cin >> a >> b;
    cout << g.so(a,b) << g.add(a,b) << endl;
}