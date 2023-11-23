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
    vector<int>x(m);
    rep(i,m)cin >> x[i];
    sort(ALL(x));
    vector<int>d;
    rep(i,m-1)d.push_back(x[i+1]-x[i]);
    sort(ALL(d));
    ll ans=0;
    rep(i,m-n)ans+=d[i];
    cout << ans << endl;
    return 0;
}