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
    vector<int>H(n);
    rep(i,n)cin >> H[i];
    int ans=inf;
    sort(ALL(H));
    rep(i,n-1){
        int t=lower_bound(H.begin()+i+1,H.end(),H[i])-H.begin();
        ans=min(ans,abs(H[i]-H[t]));
    }
    cout << ans << endl;
    return 0;
}