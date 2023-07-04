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
    int n,t;
    cin >> n >> t;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    ll ans=0;
    rep(i,n-1){
        ans+=min(t,A[i+1]-A[i]);
    }
    ans+=t; 
    cout << ans << endl;
    return 0;
}