#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
//using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>P(n+1),A(n+1);
    for(int i=1;i<=n;i++)cin >> P[i] >> A[i];

    vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    for(int len=n-2;len>=0;len--){
        for(int l=1;l<=n-len;l++){
            int r=l+len;
            int score1=0;
            if(l<=P[l-1] && P[l-1]<=r)score1=A[l-1];

            int score2=0;
            if(l<=P[r+1] && P[r+1]<=r)score2=A[r+1];

            if(l==1){
                dp[l][r]=dp[l][r+1]+score2;
            }else if(r==n){
                dp[l][r]=dp[l-1][r]+score1;
            }else{
                dp[l][r]=max(dp[l-1][r]+score1,dp[l][r+1]+score2);
            }
        }
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        ans=max(ans,dp[i][i]);
    }
    cout << ans << endl;
    return 0;
}