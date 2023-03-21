#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>>g(n);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        g[a-1].push_back(b);
        g[b-1].push_back(a);
    }
    rep(i,n){
        sort(g[i].begin(),g[i].end());
        cout << g[i].size();
        rep(j,g[i].size()) cout << ' ' << g[i][j];
        cout << endl;
    }
    return 0;
}