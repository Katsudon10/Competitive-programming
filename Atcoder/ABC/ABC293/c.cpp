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
    int h,w;
    cin >> h >> w;
    Graph G(h,vector<int>(w));
    rep(i,h)rep(j,w)cin >> G[i][j];
    vector<vector<int>>dp(h,vector<int>(w,0));
    dp[0][0]=1;
    vector<set<int>>s;
    s[0].insert(G[0][0]);
    rep(i,h){
        rep(j,w){
            if()
        }
    }

    return 0;
}