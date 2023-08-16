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
    int n,m;
    cin >> n >> m;
    vector<vector<int>>A(m+1,vector<int>(n+1));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin >> A[i][j];
        }
    }

    vector<vector<int>>dp(m+1,vector<int>(1<<n,1'000'000'000));
    
    dp[0][0]=0;
    for(int i=1;i<=m;i++){
        rep(j,(1<<n)){
            vector<int>flag(n+1,1);
            for(int k=1;k<=n;k++){
                if((j/(1<<(k-1)))%2==0)flag[k]=0;
            }

            int v=0;
            for(int k=1;k<=n;k++){
                if(flag[k]==1 || A[i][k]==1)v+=(1<<(k-1));
            }

            dp[i][j]=min(dp[i][j],dp[i-1][j]);
            dp[i][v]=min(dp[i][v],dp[i-1][j]+1);
        }
    }
    if(dp[m][(1<<n)-1]==1'000'000'000)cout << -1 << endl;
    else cout << dp[m][(1<<n)-1] <<endl;
    return 0;
}