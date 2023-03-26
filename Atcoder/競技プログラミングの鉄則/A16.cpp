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
    vector<int>A(n),B(n);
    for(int i=1;i<n;i++)cin >> A[i];
    for(int i=2;i<n;i++)cin >> B[i];
    vector<int>dp(n);
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            dp[i]=dp[i-1]+A[i];
        }else{
            dp[i]=min(dp[i-1]+A[i],dp[i-2]+B[i]);
        }
    }
    cout << dp[n-1] << endl;
    return 0;
}