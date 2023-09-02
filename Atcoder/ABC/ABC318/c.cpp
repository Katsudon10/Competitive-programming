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
    ll n,d,p;
    cin >> n >> d >> p;
    vector<ll>f(n);
    rep(i,n)cin >> f[i];
    ll ans=0;
    sort(f.rbegin(),f.rend());

    vector<ll>sn(10000000,0);
    sn[0]=0;
    for(int i=1;i<=n;i++){
        sn[i]=sn[i-1]+f[i-1];
    }
    int i=0;
    while(i<n){
        if(i+d<=n && sn[i+d]-sn[i]>=p){
            ans+=p;
            i+=d;
        }else if(i+d<=n){
            ans+=sn[i+d]-sn[i];
            i+=d;
        }else if(sn[n]-sn[i]>=p){
            ans+=p;
            break;
        }else{
            ans+=sn[i+1]-sn[i];
            i++;
        }
    }
    cout << ans << endl;
    return 0;
}