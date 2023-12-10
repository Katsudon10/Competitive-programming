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
    int n,s,k;
    cin >> n >> s >> k;
    vector<int>p(n),q(n);
    rep(i,n)cin >> p[i] >> q[i];
    ll ans=0;
    rep(i,n){
        ans+=p[i]*q[i];
    }
    if(ans<s)ans+=k;
    cout << ans << endl;
    return 0;
}