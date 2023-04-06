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
    vector<int>D(7),J(7);
    rep(i,7)cin >> D[i];
    rep(i,7)cin >> J[i];
    ll ans=0;
    rep(i,7)ans+=max(D[i],J[i]);
    cout << ans << endl;
    return 0;
}