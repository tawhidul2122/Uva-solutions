#include <cmath>
#include <iostream>
using namespace std;

int T, N, actual, ans;

int main() {
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		
		cin >> N;
		
		ans = 0;
		for (int j = 0; j < N; j++) {
			cin >> actual;
			ans = max(ans, actual);
		}
		cout << "Case " << i+1 << ": " << ans << endl;
	}
}