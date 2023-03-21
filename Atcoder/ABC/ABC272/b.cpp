#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<bool>>flag(n,vector<bool>(n));
    rep(i,m){
        int k;
        cin >> k;
        vector<int>x(k);
        rep(j,k)cin >> x[j];
        for(int j=0;j<k-1;j++){
            for(int l=j+1;l<k;l++){
                flag[x[j]-1][x[l]-1]=true;
            }
        }
    }
    rep(i,n-1){
        for(int j=i+1;j<n;j++){
            if(flag[i][j]==false){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}