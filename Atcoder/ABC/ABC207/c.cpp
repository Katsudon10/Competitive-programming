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
    int n;
    cin >> n;
    vector<double>L(n),R(n);
    rep(i,n){
        int t;
        cin >> t >> L[i] >> R[i];
        if(t>=3)L[i]+=0.5;
        if(t%2==0)R[i]-=0.5;
    }
    ll ans=0;
    rep(i,n)rep(j,i){
        if(max(L[i],L[j])<=min(R[i],R[j]))ans++;
    }
    cout << ans << endl;
    return 0;
}