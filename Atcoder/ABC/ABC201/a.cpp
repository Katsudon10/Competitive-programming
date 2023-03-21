#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	vector<int>num(3);
	for (int i = 0; i < 3; i++) cin >> num[i];
	sort(num.begin(), num.end());
	if (num[1]-num[0]== num[2] - num[1]) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
    return 0;
}