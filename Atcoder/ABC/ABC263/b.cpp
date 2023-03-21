#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<int>P(n-1);
    rep(i,n-1) {
        cin >> P[i];
        P[i]--;
    }
    vector<int>dp(n);
    for(int i=1;i<n;i++){
        dp[i]=dp[P[i-1]]+1;
    }
    cout << dp[n-1] << endl;
    return 0;
}