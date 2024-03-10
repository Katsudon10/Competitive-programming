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
    vector<int>q(n),a(n),b(n);
    rep(i,n)cin >> q[i];
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];

    int ans=0;
    rep(x,1e6+1){
        vector<int>c(n);
        rep(i,n)c[i]=q[i]-a[i]*x;
        bool flag=true;
        rep(i,n)if(c[i]<0)flag=false;
        if(!flag)break;
        int y=1e7;
        rep(i,n){
            if(b[i]==0)continue;
            y=min(y,c[i]/b[i]);
        }
        ans=max(ans,x+y);
    }
    cout << ans << endl;
    return 0;
}