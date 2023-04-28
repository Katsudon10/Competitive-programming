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
    int n;
    cin >> n;
    vector<int>C(n);
    rep(i,n)cin >> C[i];
    sort(ALL(C));
    ll ans=1;
    rep(i,n){
        ans=ans*max(0,(C[i]-i))%1000000007;
    }
    cout << ans << endl;
    return 0;
}