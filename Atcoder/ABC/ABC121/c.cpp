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
    int n,m;
    cin >> n >> m;
    vector<P>p(n);
    rep(i,n)cin >> p[i].first >> p[i].second;
    sort(ALL(p));
    ll ans=0,cnt=0;
    rep(i,n){
        if(cnt==m)break;
        if(cnt+p[i].second<=m){
            ans+=(ll)p[i].first*p[i].second;
            cnt+=p[i].second;
        }else{
            ans+=(m-cnt)*p[i].first;
            cnt=m;
        }
    }
    cout << ans << endl;
    return 0;
}