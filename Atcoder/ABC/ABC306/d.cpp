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
    ll n;
    cin >> n;
    vector<ll>X(n),Y(n);
    rep(i,n)cin >> X[i] >> Y[i];
    vector<vector<ll>>dp(n+1,vector<ll>(2,0));
    rep(i,n){
        if(X[i]==0){
            dp[i+1][1]=dp[i][1];
            dp[i+1][0]=max(dp[i][0],Y[i]);
            dp[i+1][0]=max(dp[i+1][0],dp[i][0]+Y[i]);
            dp[i+1][0]=max(dp[i+1][0],dp[i][1]+Y[i]);
        }else{
            dp[i+1][0]=dp[i][0];
            dp[i+1][1]=max(dp[i][1],Y[i]);
            dp[i+1][1]=max(dp[i+1][1],dp[i][0]+Y[i]);
        }
    }
    cout << max(dp[n][0],dp[n][1]) << endl;
    return 0;
}