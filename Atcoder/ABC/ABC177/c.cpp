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
    int n;
    cin >> n;
    int mod=1000000007;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    vector<ll>ta(n);
    ta[0]=a[0];
    for(int i=1;i<n;i++)ta[i]=ta[i-1]+a[i];
    ll ans=0;
    rep(i,n){
        ll sum=(ta[n-1]-ta[i])%mod;
        ans+=a[i]*sum;
        ans%=mod;
    }
    cout << ans << endl;
    return 0;
}