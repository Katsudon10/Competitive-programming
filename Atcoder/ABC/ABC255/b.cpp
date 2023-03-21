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
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<pair<ll,ll>>p(n);
    rep(i,n)cin >> p[i].first >> p[i].second;
    ll dir=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            dir=max(dir,(p[i].first-p[j].first)*(p[i].first-p[j].first)+(p[i].second-p[j].second)*(p[i].second-p[j].second));
        }
    }
    cout << fixed << setprecision(10) << sqrt(dir) << endl;
    return 0;
}