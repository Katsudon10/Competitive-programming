#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int n;
	cin >> n;
	vector<pair<int, int>>p,s;
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		p.push_back({ a, b });
		s.push_back({ b, a });
	}
	
	sort(p.begin(), p.end());
	sort(s.begin(), s.end());
 
	if (p[0].first !=s[0].second) {
		cout << max(p[0].first,s[0].first) << endl;
	}
	else if (p[0].first == s[0].second) {
		if (p[0].first == s[1].second) {
			cout << max(p[0].first, s[0].first) << endl;
		}
		else {
			cout << min(p[0].first + s[0].first, max(p[0].first, s[1].first)) << endl;
		}
	}
    return 0;
}