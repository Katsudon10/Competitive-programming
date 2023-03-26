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
    vector<int>h(n);
    rep(i,n)cin >> h[i];
    vector<int>dp(n,0);
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(i==1)dp[i]=abs(h[i]-h[i-1]);
        else dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    cout << dp[n-1] << endl;
    return 0;
}