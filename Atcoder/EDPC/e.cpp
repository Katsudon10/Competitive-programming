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

int main(){
    int n,w;
    cin >> n >> w;
    vector<int>W(n),V(n);
    rep(i,n)cin >> W[i] >> V[i];
    vector<vector<ll>>dp(n+1,vector<ll>(100001,inf));
    dp[0][0]=0;
    rep(i,n){
        rep(j,100001){
            if(j-V[i]>=0){
                dp[i+1][j]=min(dp[i+1][j],dp[i][j-V[i]]+W[i]);
            }
            dp[i+1][j]=min(dp[i+1][j],dp[i][j]);
        }
    }
    ll ans=0;
    rep(i,100001){
        if(dp[n][i]<=w)ans=i;
    }
    cout << ans << endl;
    return 0;
}