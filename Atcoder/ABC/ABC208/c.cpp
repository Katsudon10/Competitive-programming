#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<P>p(n);
    rep(i,n)p[i]=P(a[i],i);
    sort(p.begin(),p.end());
    vector<ll>ans(n,k/n);
    k=k%n;
    rep(i,k){
        ans[p[i].second]++;
    }
    rep(i,n)cout << ans[i] << endl;
    return 0;
}