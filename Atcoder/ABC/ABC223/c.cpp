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
    vector<double>a(n),b(n);
    rep(i,n)cin >> a[i] >> b[i];
    double t=0,ans=0;
    rep(i,n)t+=a[i]/b[i];
    t/=2;
    rep(i,n){
        ans+=min(a[i],t*b[i]);
        t-=min(a[i]/b[i],t);
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}