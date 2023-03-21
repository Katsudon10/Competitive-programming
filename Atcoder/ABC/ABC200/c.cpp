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
    int n;
    cin >> n;
    vector<ll>A(n),B(200,0);
    rep(i,n)cin >> A[i];
    rep(i,n)B[A[i]%200]++;
    ll ans=0;
    rep(i,200){
        ans+=(B[i]*(B[i]-1))/2;
    }
    cout << ans << endl;
    return 0;
}