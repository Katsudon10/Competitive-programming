#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<vector<char>>A(n,vector<char>(n));
    rep(i,n)rep(j,n) cin >> A[i][j];
    rep(i,n)rep(j,n){
        if(A[i][j]=='W' && A[j][i]!='L'){
            cout << "incorrect" << endl;
            return 0;
        }
        if(A[i][j]=='L' && A[j][i]!='W'){
            cout << "incorrect" << endl;
            return 0;
        }
        if(A[i][j]=='D' && A[j][i]!='D'){
            cout << "incorrect" << endl;
            return 0;
        }
        if(i==j && A[i][j]!='-' ){
            cout << "incorrect" << endl;
            return 0;
        }
    }
    cout << "correct" << endl;
    return 0;
}