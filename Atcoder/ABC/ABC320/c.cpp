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
    int m;
    cin >> m;
    vector<string>s(3);
    rep(i,3)cin >> s[i];
    int ans=inf;
    rep(i,3*m)rep(j,3*m)rep(k,3*m){
        if(i==j)continue;
        if(i==k)continue;
        if(j==k)continue;
        if(s[0][i%m]!=s[1][j%m])continue;
        if(s[0][i%m]!=s[2][k%m])continue;
        ans=min(ans,max({i,j,k}));
    }
    if(ans==inf)ans=-1;
    cout << ans << endl;
    return 0;
}