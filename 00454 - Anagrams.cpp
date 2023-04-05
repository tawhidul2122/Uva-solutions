#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

const int ASCII = 256;
int T, cnt1[ASCII], cnt2[ASCII];
string str;
vector<string> vect;

bool anagrams(string& a, string& b) {

	for (int i = 0; i < ASCII; i++) {
		cnt1[i] = cnt2[i] = 0;
	}

	for (int i = 0; i < a.length(); i++) {
		if (a[i] != ' ') {
			cnt1[a[i]]++;
		}
	}

	for (int i = 0; i < b.length(); i++) {
		if (b[i] != ' ') {
			cnt2[b[i]]++;
		}
	}

	for (int i = 0; i < ASCII; i++) {
		if (cnt1[i] != cnt2[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	getline(cin, str);
	stringstream(str) >> T;
	getline(cin, str); 
	for (int t = 0; t < T; t++) {
		
		if (t > 0) {
			cout << "\n";
		}
	
		vect.clear();
		while (getline(cin, str) && str.length() > 0) {
			vect.push_back(str);
		}
		sort(vect.begin(), vect.end());
	
		for (int i = 0; i < vect.size(); i++) {
			for (int j = i+1; j < vect.size(); j++) {
				if (anagrams(vect[i], vect[j])) {
					cout << vect[i] << " = " << vect[j] << "\n";
				}
			}
		}
	}
}