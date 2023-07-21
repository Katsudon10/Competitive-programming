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
//A[i].erase(unique(ALL(A[i])),A[i].end());

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    vector<vector<bool>>dp(n+1,vector<bool>(x+1));
    dp[0][0]=true;
    rep(i,n){
        rep(j,x){
            if(dp[i][j]){
                if(j+A[i]<=x)dp[i+1][j+A[i]]=true;
                if(j+B[i]<=x)dp[i+1][j+B[i]]=true;
            }
        }
    }
    if(dp[n][x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}