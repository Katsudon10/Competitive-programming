#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int>dp(n,inf),num(n);
    rep(i,n) cin >> num[i];
    dp[0]=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=k;j++){
            if(i+j<n){
                dp[i+j]=min(dp[i]+abs(num[i]-num[i+j]),dp[i+j]);
            }
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}