#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int r,c;
    cin >> r >> c;
    vector<vector<int>>num(2,vector<int>(2));
    rep(i,2)rep(j,2){
        cin >> num[i][j];
    }
    cout << num[r-1][c-1] << endl;
    return 0;
}