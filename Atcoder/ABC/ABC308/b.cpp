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
    vector<string>c(n);
    vector<string>d(m);
    vector<int>p(m+1);
    rep(i,n)cin >> c[i];
    rep(i,m)cin >> d[i];
    rep(i,m+1)cin >> p[i];
    map<string,int>mp;
    rep(i,m)mp[d[i]]=p[i+1];

    ll ans=0;
    rep(i,n){
        if(mp[c[i]]==0){
            ans+=p[0];
        }else{
            ans+=mp[c[i]];
        }
    }
    cout << ans << endl;
    return 0;
}