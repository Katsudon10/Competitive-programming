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
    int n,m,p;
    cin >> n >> m >> p;
    vector<int>a(n),b(m);
    rep(i,n)cin >> a[i];
    rep(i,m)cin >> b[i];
    sort(ALL(b));
    vector<ll>tb(m+1);
    
    for(int i=0;i<m;i++)tb[i+1]=tb[i]+b[i];
    ll ans=0;
    rep(i,n){
        int it=lower_bound(ALL(b),p-a[i])-b.begin();
        ans+=tb[it]+(ll)it*a[i]+(ll)(m-it)*p;
    }
    cout << ans << endl;
    return 0;
}