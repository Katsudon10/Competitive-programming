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

ll f(ll x,ll m){
    ll r = (x % m + m) % m;
    return (x - r) / m;
}

int main(){
    ll a,m,l,r;
    cin >> a >> m >> l >> r;
    l-=a,r-=a;
    cout << f(r,m)-f(l-1,m) << endl;
    return 0;
}