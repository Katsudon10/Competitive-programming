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
    vector<int>a(n),b(n),c(n),d(n);
    rep(i,n)cin >> a[i] >> b[i] >> c[i] >> d[i];
    vector<vector<bool>>mp(103,vector<bool>(103,false));
    rep(i,n){
        for(int x=a[i];x<b[i];x++){
            for(int y=c[i];y<d[i];y++){
                mp[x][y]=true;
            }
        }
    }
    ll ans=0;
    rep(x,103){
        rep(y,103){
            if(mp[x][y])ans++;
        }
    }
    cout << ans << endl;
    return 0;
}