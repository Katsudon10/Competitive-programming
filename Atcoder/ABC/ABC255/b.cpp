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
    int n,k;
    cin >> n >> k;
    vector<int>a(k);
    rep(i,k){
        cin >> a[i];
        a[i]--;
    }
    vector<int>x(n),y(n);
    rep(i,n)cin >> x[i] >> y[i];

    double ans=0;
    rep(i,n){
        double d=1e18;
        rep(j,k){
            double dx=x[i]-x[a[j]];
            double dy=y[i]-y[a[j]];
            d=min(d,(double)dx*dx+dy*dy);
        }
        ans=max(ans,d);
    }
    cout << fixed << setprecision(10) << sqrt(ans) << endl;
}