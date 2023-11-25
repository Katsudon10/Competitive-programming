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
    ll d;
    cin >> d;
    ll ans=1e12;
    for(ll x=0;x*x<=d;x++){
        ll y=sqrt(d-x*x);
        ans=min(ans,abs(x*x+y*y-d));
        y++;
        ans=min(ans,abs(x*x+y*y-d));
    }
    cout << ans << endl;
    return 0;
}