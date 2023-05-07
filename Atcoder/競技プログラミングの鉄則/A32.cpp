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
    int n,a,b;
    cin >> n >> a >> b;
    vector<bool>dp(n+1,false);
    rep(i,n+1){
        if(i>=a && dp[i-a]==false)dp[i]=true;
        else if(i>=b && dp[i-b]==false)dp[i]=true;
        else dp[i]=false;
    }
    if(dp[n]){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }
    return 0;
}