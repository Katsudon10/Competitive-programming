#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    vector<vector<int>>A(3,vector<int>(3));
    rep(i,3)rep(j,3) cin >> A[i][j];
    int n;
    cin >> n;
    vector<vector<bool>>bingo(3,vector<bool>(3,false));
    rep(i,n){
        int b;
        cin >> b;
        rep(j,3)rep(k,3){
            if(A[j][k]==b) bingo[j][k]=true;
        }
    }
    rep(i,3){
        if(bingo[i][0] && bingo[i][1] && bingo[i][2]){
            cout << "Yes" << endl;
            return 0;
        }
        if(bingo[0][i] && bingo[1][i] && bingo[2][i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(bingo[0][0] && bingo[1][1] && bingo[2][2]){
        cout << "Yes" << endl;
        return 0;
    }
    if(bingo[0][2] && bingo[1][1] && bingo[2][0]){
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}