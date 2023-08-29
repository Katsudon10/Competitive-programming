#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={-1,-1,-1,0,0,1,1,1};
vector<int>dys={-1,0,1,-1,1,-1,0,1};

//fixed << setprecision(10)
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n;
    cin >> n;
    vector<vector<ll>>a(n,vector<ll>(n));

    rep(i,n)rep(j,n){
        char c;
        cin >> c;
        a[i][j]=c-'0';
    }

    ll ans=0;
    rep(si,n)rep(sj,n)rep(v,8){
        int i=si,j=sj;
        ll x=0;
        rep(k,n){
            x=x*10+a[i][j];
            i+=dxs[v];
            j+=dys[v];
            i=(i+n)%n;
            j=(j+n)%n;
        }
        ans=max(ans,x);
    }
    cout << ans << endl;
    return 0;
}