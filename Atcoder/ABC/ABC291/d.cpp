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
ll mod=998244353;

int main(){
    int n;
    cin >> n;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    vector<vector<ll>>dp(n,vector<ll>(2,0));
    dp[0][0]=dp[0][1]=1;
    for(int i=1;i<n;i++){
        if(A[i]!=A[i-1])dp[i][0]+=dp[i-1][0];
        if(A[i]!=B[i-1])dp[i][0]+=dp[i-1][1];
        if(B[i]!=A[i-1])dp[i][1]+=dp[i-1][0];
        if(B[i]!=B[i-1])dp[i][1]+=dp[i-1][1];
        dp[i][0]%=mod;
        dp[i][1]%=mod;
    }
    cout << (dp[n-1][0]+dp[n-1][1])%mod << endl;
    return 0;
}
