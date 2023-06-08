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
    ll d;
    cin >> n >> m >> d;
    vector<ll>A(n),B(n);
    rep(i,n)cin >> A[i];
    rep(i,m)cin >> B[i];
    sort(ALL(A));
    sort(ALL(B));
    ll ans=-1;
    rep(i,n){
        ll l=A[i]-d,r=A[i]+d;
        int j=upper_bound(ALL(B),r)-B.begin();
        if(j>0){
            ll x=B[j-1];
            if(l<=x)ans=max(ans,A[i]+x);
        }
    }
    cout << ans << endl;
    return 0;
}