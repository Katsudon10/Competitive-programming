#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int n;
	int a = 0, b = 1001;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int c;
		cin >> c;
		a = max(a, c);
	}
	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;
		b = min(b, d);
	}
	if (a > b) {
		cout << 0 << endl;
	}
	else {
		cout << b - a + 1 << endl;
	}
    return 0;
}