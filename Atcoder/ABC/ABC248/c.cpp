#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,m,k;
    cin >> n >> m >> k;
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    vector<vector<int>>num(n+1,vector<int>(m+1,0));
    rep(i,n){
        for(int j=1;j<=m;j++){
            if(j+num[i][j]<=k){
                num[i+1][j]+=j;
                dp[i+1][j]++;
            }
            
        }
    }
    int ans=0;
    rep(i,m){
        if(dp[n][i]!=0){
            ans+=dp[n-1][i];
        }
    }
    cout << ans << endl;
    return 0;
}