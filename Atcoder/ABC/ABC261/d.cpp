#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>x(n);
    rep(i,n)cin >> x[i];
    map<int,int>mp;
    rep(i,m){
        int c,y;
        cin >> c >> y;
        mp[c]=y;
    }

    vector<vector<ll>>dp(n+1,vector<ll>(n+1,-inf));
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)dp[i][j]=dp[i-1][j-1]+x[i-1]+mp[j];
        dp[i][0]=0;
        for(int j=0;j<i;j++)dp[i][0]=max(dp[i][0],dp[i-1][j]);
    }

    ll ans=0;
    rep(i,n+1)ans=max(ans,dp[n][i]);
    cout << ans << endl;
    return 0;
}