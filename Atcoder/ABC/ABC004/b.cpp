#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    vector<vector<char>>c(4,vector<char>(4));
    rep(i,4)rep(j,4)cin >> c[i][j];
    for(int i=3;i>=0;i--){
        for(int j=3;j>=0;j--){
            if(j!=3)cout << ' ';
            cout << c[i][j];
        }
        cout << endl;
    }
    return 0;
}