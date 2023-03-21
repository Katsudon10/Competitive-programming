#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	vector<char>A;
	char s;
	while (cin >> s) {
		A.push_back(s);
	}
	for (int i = A.size() - 1; i >= 0; i--) {
		if (A.at(i) == '0') {
			cout << 0;
		}
		else if (A.at(i) == '1') {
			cout << 1;
		}
		else if (A.at(i) == '6') {
			cout << 9;
		}
		else if (A.at(i) == '8') {
			cout << 8;
		}
		else if (A.at(i) == '9') {
			cout << 6;
		}
	}
    return 0;
}