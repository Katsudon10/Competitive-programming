#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,w;
    cin >> h >> w;
    vector<vector<int>>A(h,vector<int>(w));
    rep(i,h)rep(j,w) cin >> A[i][j];
    rep(j,w){
        rep(i,h){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}