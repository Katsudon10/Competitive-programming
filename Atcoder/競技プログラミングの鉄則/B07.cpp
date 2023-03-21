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
    int t,n;
    cin >> t >> n;
    vector<int>p(t+1,0);
    rep(i,n){
        int l,r;
        cin >> l >> r;
        p[l]++;
        p[r]--;
    }
    int ans=0;
    rep(i,t){
        ans+=p[i];
        cout << ans << endl;
    }
    return 0;
}