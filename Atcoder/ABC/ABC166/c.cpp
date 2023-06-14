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
    int n,m;
    cin >> n >> m;
    vector<int>H(n);
    rep(i,n)cin >> H[i];
    vector<bool>ok(n,true);
    rep(i,m){
        int a,b;
        cin >> a >> b;
        --a,--b;
        if(H[a]<=H[b])ok[a]=false;
        if(H[b]<=H[a])ok[b]=false;
    }
    int ans=0;
    rep(i,n)if(ok[i])ans++;
    cout << ans << endl;
    return 0;
}