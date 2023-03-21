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
    int n,k;
    cin >> n >> k;
    vector<pair<ll,int>>p(n);
    rep(i,n){
        cin >> p[i].first >> p[i].second;
    }
    sort(p.begin(),p.end());
    ll ans=k;
    rep(i,n){
        if(ans<p[i].first)break;
        ans+=p[i].second;
    }
    
    cout << ans << endl;
    return 0;
}