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
    vector<int>w(n),x(n);
    rep(i,n)cin >> w[i] >> x[i];
    ll ans=0;
    rep(i,24){
        ll cnt=0;
        rep(j,n){
            x[j]++;
            x[j]%=24;
            if(x[j]>=9 && x[j]+1<=18)cnt+=w[j];
        }
        ans=max(ans,cnt);
    }
    cout << ans << endl;
    return 0;
}