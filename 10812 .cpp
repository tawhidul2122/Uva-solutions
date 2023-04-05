#include <iostream>
using namespace std;

int n, a, b, c, d;

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c >> d;
		
		if ((c + d) % 2 != 0) {
			cout << "impossible\n";
			continue;
		}
		a = (c + d) / 2;
		
		if (c - a < 0) {
			cout << "impossible\n";
			continue;
		}
		b = c - a;
		cout << a << " " << b << "\n";
	}
}