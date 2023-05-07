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
    int n,k;
    cin >> n >> k;
    vector<int>a(k);
    rep(i,k)cin >> a[i];
    sort(ALL(a));
    vector<bool>dp(n+1,false);
    rep(i,n+1){
        rep(j,k){
            if(i>=a[j] && dp[i-a[j]]==false)dp[i]=true;
        }
    }
    if(dp[n]){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }
    return 0;
}