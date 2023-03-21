#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<char>>C(h,vector<char>(w));
    rep(i,h)rep(j,w) cin >> C[i][j];
    rep(i,w){
        int ans=0;
        rep(j,h){
            if(C[j][i]=='#') ans++;
        }
        if(i!=0)cout <<' ';
        cout << ans;
    }
    cout << endl;
    return 0;
}