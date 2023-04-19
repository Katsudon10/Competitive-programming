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
    string s,t;
    cin >> s >> t;
    vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,0));
    rep(i,s.size()+1){
        rep(j,t.size()+1){
            if(i>=1 && j>=1 && s[i-1]==t[j-1]){
                dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+1});
            }else if(i>=1 && j>=1){
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }else if(i>=1){
                dp[i][j]=dp[i-1][j];
            }else if(j>=1){
                dp[i][j]=dp[i][j-1];
            }
        }
    }
    cout << dp[s.size()][t.size()] << endl;
    return 0;
}