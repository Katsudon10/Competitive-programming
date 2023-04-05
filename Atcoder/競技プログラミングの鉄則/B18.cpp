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
    int n,s;
    cin >> n >> s;
    vector<int>A(n+1);
    for(int i=1;i<=n;i++)cin >> A[i];

    vector<vector<bool>>dp(n+1,vector<bool>(s+1,false));
    dp[0][0]=true;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(j-A[i]>=0 && dp[i-1][j-A[i]]){
                dp[i][j]=true;
            }
            if(dp[i-1][j])dp[i][j]=true;
        }
    }

    if(!dp[n][s]){
        cout << -1 << endl;
        return 0;
    }

    vector<int>ans;
    int pos=s;
    for(int i=n;i>0;i--){
        if(!dp[i-1][pos]){
            ans.push_back(i);
            pos-=A[i];
        }
    }

    reverse(ALL(ans));
    cout << ans.size() << endl;
    for(int i:ans){
        cout << i << ' ';
    }
    cout << endl;
    return 0;
}