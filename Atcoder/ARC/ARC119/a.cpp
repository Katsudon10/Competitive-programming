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
    ll n;
    cin >> n;

    ll ans=(1LL<<60);
    rep(i,61){
        ll a=n/(1LL<<i);
        ll b=i;
        ll c=n-a*(1LL<<i);
        ans=min(ans,a+b+c);
    }
    cout << ans << endl;
    return 0;
}