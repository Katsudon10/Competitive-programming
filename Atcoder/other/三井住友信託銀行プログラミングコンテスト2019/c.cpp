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
    int x;
    cin >> x;
    vector<int>N={100,101,102,103,104,105};
    vector<bool>dp(x+1,false);
    dp[0]=true;
    rep(i,x+1){
        rep(j,6){
            if(i+N[j]<=x && dp[i]){
                dp[i+N[j]]=true;
            }
        }
    }
    if(dp[x]){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}