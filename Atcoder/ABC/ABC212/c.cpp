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
    int n,m;
    cin >> n >> m;
    vector<int>A(n),B(m);
    rep(i,n)cin >> A[i];
    rep(i,m)cin >> B[i];
    sort(ALL(A));
    sort(ALL(B));
    int ai=0,bi=0;
    int ans=inf;
    while(ai<n && bi<m){
        ans=min(ans,abs(A[ai]-B[bi]));
        if(A[ai]<B[bi])ai++; else bi++;
    }
    cout << ans << endl;
    return 0;
}