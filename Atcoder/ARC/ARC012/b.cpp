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
    ll n,va,vb;
    double l;
    cin >> n >> va >> vb >> l;
    rep(i,n){
        double t=l/va;
        l=t*vb;
    }
    cout << fixed << setprecision(10) << l << endl;
    return 0;
}