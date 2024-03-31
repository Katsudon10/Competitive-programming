#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
struct Edge{
    int to;
    ll w;
    Edge(int to,ll w):to(to),w(w){}
};
using Graph = vector<vector<int>>;
using WeightedGraph = vector<vector<Edge>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>a(n),b(n);
    rep(i,n)cin >> a[i] >> b[i];
    vector<vector<bool>>dp(n+1,vector<bool>(x+1,false));
    dp[0][0]=true;
    rep(i,n){
        rep(j,x+1){
            if(dp[i][j]){
                rep(k,b[i]+1){
                    if(j+a[i]*k<=x)dp[i+1][j+a[i]*k]=true;
                }
            }
        }
    }
    if(dp[n][x])cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}