#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(8) << (a - b) / a * 100 << endl;
    return 0;
}