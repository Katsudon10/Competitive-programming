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
    int n,s,m,l;
    cin >> n >> s >> m >> l;
    vector<int>dp(n+13,inf);
    dp[0]=0;
    for(int i=1;i<n+13;i++){
        dp[i]=min(dp[i],(n+5)/6*s);
        dp[i]=min(dp[i],(n+7)/8*m);
        dp[i]=min(dp[i],(n+11)/12*l);
        if(i-6>=0)dp[i]=min(dp[i],dp[i-6]+s);
        if(i-8>=0)dp[i]=min(dp[i],dp[i-8]+m);
        if(i-12>=0)dp[i]=min(dp[i],dp[i-12]+l);
    }
    int ans=dp[n];
    for(int i=n+1;i<n+13;i++)ans=min(ans,dp[i]);
    cout << ans << endl;
    return 0;
}