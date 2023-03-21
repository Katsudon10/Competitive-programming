#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int t=0;
    vector<int>T(n);
    rep(i,n)cin >> T[i];
    rep(i,n)t+=T[i];
    int m;
    cin >> m;
    rep(i,m){
        int p,x;
        cin >> p >> x;
        cout << t-T[p-1]+x << endl;
    }
    return 0;
}