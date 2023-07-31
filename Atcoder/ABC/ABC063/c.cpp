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
    vector<int>s(n);
    rep(i,n)cin >> s[i];
    vector<vector<bool>>dp(n+1,vector<bool>(n*100+1));
    dp[0][0]=true;
    rep(i,n){
        rep(j,n*100+1){
            if(dp[i][j]){
                dp[i+1][j]=true;
                dp[i+1][j+s[i]]=true;
            }
        }
    }
    int ans=0;
    rep(i,n*100+1){
        if(i%10!=0 && dp[n][i])ans=max(ans,i);
    }
    cout << ans << endl;
    return 0;
}