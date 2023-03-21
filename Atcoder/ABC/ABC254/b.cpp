#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    vector<vector<int>>num(n,vector<int>(n));
    rep(i,n)rep(j,i+1){
        if(j==0 || j==i ){
            num[i][j]=1;
        }else{
            num[i][j]=num[i-1][j-1]+num[i-1][j];
        }
    }
    rep(i,n){
        rep(j,i+1){
            if(j==i){
                cout << num[i][j];
            }else{
                cout << num[i][j] << " " ;
            }
        }
        cout << endl;
    }
    return 0;
}