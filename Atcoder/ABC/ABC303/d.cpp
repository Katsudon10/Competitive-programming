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
    ll x,y,z;
    cin >> x >> y >> z;
    string s;
    cin >> s;
    vector<vector<ll>>dp(s.size()+1,vector<ll>(2,inf));
    dp[0][0]=0;
    dp[0][1]=z;
    rep(i,s.size()){
        if(s[i]=='a'){
            dp[i+1][0]=min(dp[i][0]+x,dp[i][1]+z+x);
            dp[i+1][1]=min(dp[i][1]+y,dp[i][0]+z+y);
        }else{
            dp[i+1][0]=min(dp[i][0]+y,dp[i][1]+z+y);
            dp[i+1][1]=min(dp[i][1]+x,dp[i][0]+z+x);
        }
    }
    cout << min(dp[s.size()][0],dp[s.size()][1]) << endl;
    return 0;
}