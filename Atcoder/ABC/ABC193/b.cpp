#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int n, a, p, x;
	int num = 1000000000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> p >> x;
		if (a < x) {
			num = min(num, p);
		}
	}
	if (num == 1000000000) {
		cout << -1 << endl;
	}
	else {
		cout << num << endl;
	}
    return 0;
}