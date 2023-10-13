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
    vector<int>a(n),b(n);
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];
    sort(ALL(a));
    sort(b.rbegin(),b.rend());
    ll ans=0;
    rep(i,n)ans+=(ll)a[i]*b[i];
    cout << ans << endl;
    return 0;
}