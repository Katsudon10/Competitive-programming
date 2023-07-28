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
    vector<int>s(n),t(n);
    rep(i,n)cin >> s[i];
    rep(i,n)cin >> t[i];
    vector<int>dp(n,0);
    dp[0]=t[0];
    for(int i=1;i<2*n;i++){
        dp[i%n]=min(dp[(i-1)%n]+s[(i-1)%n],t[i%n]);
    }
    rep(i,n)cout << dp[i] << endl;
    return 0;
}