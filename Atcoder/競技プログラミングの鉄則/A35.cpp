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
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<vector<int>>dp(n,vector<int>(n));
    rep(i,n)dp[n-1][i]=A[i];
    for(int i=n-2;i>=0;i--){
        rep(j,n){
            if(i%2==0)dp[i][j]=max(dp[i+1][j],dp[i+1][j+1]);
            else dp[i][j]=min(dp[i+1][j],dp[i+1][j+1]);
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}