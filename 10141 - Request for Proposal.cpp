#include <iostream>
using namespace std;

const double INF = 10e15;
int n, p, maxreqs, reqs, casenum;
double mincost, cost;
string aux, ans;

int main() {
	
	casenum = 1;
	while (cin >> n && cin >> p && n + p > 0) {
		
		getchar(); 
		for (int i = 0; i < n; i++)
			getline(cin, aux);
		
		mincost = INF; maxreqs = 0; ans = "";
		for (int i = 0; i < p; i++) {
			getline(cin, aux);
			cin >> cost; cin >> reqs;
			getchar(); // \n of prev line
			
			if (reqs > maxreqs || (reqs == maxreqs && cost < mincost)) {
				ans = aux;
				maxreqs = reqs;
				mincost = cost;
			}
			
			for (int j = 0; j < reqs; j++)
				getline(cin, aux);
		}
		
		if (casenum > 1)
			cout << endl;
		cout << "RFP #" << casenum++ << endl;
		cout << ans << endl;
	}
}