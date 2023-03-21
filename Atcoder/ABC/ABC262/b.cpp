#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,m;
    int ans=0;
    cin >> n >> m;
    vector<vector<int>>num(n,vector<int>(n));
    rep(i,m){
        int u,v;
        cin >> u >> v;
        num[u-1][v-1]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(!num[i][j]) continue;
                if(!num[j][k]) continue;
                if(!num[i][k]) continue;
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}