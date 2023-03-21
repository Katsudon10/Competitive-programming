#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	int n,x;
    cin >> n >> x;
    vector<int>a(n);
    rep(i,n) cin >> a[i];
    rep(i,n){
        if(a[i]!=x)cout << a[i] << ' ';
    }
    return 0;
}