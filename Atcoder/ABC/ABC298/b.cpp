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
    int n;
    cin >> n;
    vector<vector<int>>A(n,vector<int>(n)),B(n,vector<int>(n));
    rep(i,n)rep(j,n)cin >> A[i][j];
    rep(i,n)rep(j,n)cin >> B[i][j];
    
    rep(i,4){
        bool flag=true;
        rep(i,n)rep(j,n){
            if(A[i][j]==1 && B[i][j]!=1){
                flag=false;
            }
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
        //回転
        vector<vector<int>>C(n,vector<int>(n));
        rep(i,n)rep(j,n)C[i][j]=A[n-j-1][i];
        A=C;
    }
    cout << "No" << endl;
    return 0;
}