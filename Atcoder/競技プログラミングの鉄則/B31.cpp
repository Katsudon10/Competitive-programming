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
    ll ans=0;
    ans+=n/3+n/5+n/7;
    ans-=n/15;
    ans-=n/35;
    ans-=n/21;
    ans+=n/105;
    cout << ans << endl;
    return 0;
}