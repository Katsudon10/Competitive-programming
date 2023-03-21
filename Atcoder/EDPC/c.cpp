#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    vector<vector<int>>num(n,vector<int>(3)),dp(n,vector<int>(3));
    rep(i,n)rep(j,3) cin >> num[i][j];
    rep(i,3) dp[0][i]=num[0][i];
    for(int i=1;i<n;i++){
        rep(j,3)rep(k,3){
            if(j!=k) dp[i][j]=max(dp[i][j],dp[i-1][k]+num[i][j]);
        }
    }
    cout << max(dp[n-1][0],max(dp[n-1][1],dp[n-1][2])) << endl;
    return 0;
}