#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int N, t, users[1005];

inline int diff(int i, int j) {
	return min(abs(users[i] - users[j]), 24 - abs(users[i] - users[j]));
}

int main() {
	
	while (cin >> N) {
		
		for (int i = 0; i < N; i++)
			cin >> users[i];
		sort(users, users + N);
		int ans0 = 0, ans1 = 0;
		
		for (int i = 0; i < N - 1; i += 2)
			ans0 += diff(i, i + 1);
	
		for (int i = 1; i < N - 2; i += 2)
			ans1 += diff(i, i + 1);
		ans1 += diff(0, N - 1);
		
		cout << min(ans0, ans1) << endl;
	}
}
