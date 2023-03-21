#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>S(n),T(m);
    rep(i,n)cin >> S[i];
    rep(i,m)cin >> T[i];
    int ans=0;
    rep(i,n){
        rep(j,m){
            if(S[i]%1000==T[j]){
                ans++;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}