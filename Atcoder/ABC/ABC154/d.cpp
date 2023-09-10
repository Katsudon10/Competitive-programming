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

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep(i,n)cin >> p[i];

    vector<double> e(n + 1, 0.0); // 期待値の累積和を計算
    rep(i,n)e[i+1]=e[i]+(1.0+p[i])/2.0;

    double ans=0.0;
    rep(i,n-k+1){
        double f=e[i+k]-e[i];
        ans=max(ans,f);
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}