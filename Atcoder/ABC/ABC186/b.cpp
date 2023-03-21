#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    int num=inf;
    vector<vector<int>>A(h,vector<int>(w));
    rep(i,h)rep(j,w){
        cin >> A[i][j];
        num=min(num,A[i][j]);
    }
    int ans=0;
    rep(i,h)rep(j,w){
        ans+=A[i][j]-num;
    }
    cout << ans << endl;
    return 0;
}