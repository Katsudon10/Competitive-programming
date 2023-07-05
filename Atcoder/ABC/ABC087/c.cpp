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
    int n;
    cin >> n;
    vector<vector<int>>A(2,vector<int>(n));
    rep(i,2)rep(j,n)cin >> A[i][j];
    vector<vector<int>>dp(2,vector<int>(n,-1));
    dp[0][0]=A[0][0];
    dp[1][0]=A[1][0]+dp[0][0];
    rep(i,2){
        rep(j,n){
            if(j>0)dp[i][j]=max(dp[i][j],dp[i][j-1]+A[i][j]);
            if(i>0)dp[i][j]=max(dp[i][j],dp[i-1][j]+A[i][j]);
        }
    }
    cout << dp[1][n-1] << endl;
    return 0;
}