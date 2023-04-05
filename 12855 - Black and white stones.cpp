#include <cmath>
#include <iostream>
#include <string>
using namespace std;

long long ans, A, B;
int N, black;
string stones;

int main() {

	while (cin >> A && cin >> B) {
		
		cin >> stones;
		N = stones.length();
		
		black = 0;
		for (int i = 0; i < N; i++)
			black += (stones[i] == 'B') ? 1 : 0;
		
		ans = 0;
		for (int i = black - 1, j = black; i >= 0; i--) {
			if (stones[i] == 'W') { 
				for (; stones[j] != 'B'; j++); 
				stones[i] = 'B'; stones[j] = 'W';
				long long v1 = A, v2 = (long long) (A - B) * (j - i);
				ans += min(v1, v2);
			}
		}
		cout << ans << endl;
	}
}