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
    int k;
    cin >> k;
    ll ans=0;
    for(int i=1;i<=k;i++){
        for(int j=1;i*j<=k;j++){
            for(int l=1;i*j*l<=k;l++){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}