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
    int n;
    cin >> n;
    vector<int>A(n-1),B(n-1);
    rep(i,n-1)cin >> A[i];
    rep(i,n-1)cin >> B[i];
    vector<int>dp(n,-inf);
    dp[0]=0;
    rep(i,n-1){
        dp[A[i]-1]=max(dp[i]+100,dp[A[i]-1]);
        dp[B[i]-1]=max(dp[i]+150,dp[B[i]-1]);
    }
    cout << dp[n-1] << endl;
    return 0;
}