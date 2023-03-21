#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int a, b;
	cin >> a >> b;
	int num = 0;
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= b; j++) {
			num += 100 * i + j;
		}
	}
	cout << num;
    return 0;
}