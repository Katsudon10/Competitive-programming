#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    vector<int>dp(n),num(n);
    rep(i,n) cin >> num[i];
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            dp[i]=abs(num[i]-num[i-1]);
        }else{
            dp[i]=min(dp[i-1]+abs(num[i]-num[i-1]),dp[i-2]+abs(num[i]-num[i-2]));
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}