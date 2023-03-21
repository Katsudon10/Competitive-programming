#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
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
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    int m;
    cin >> m;
    vector<int>b(m);
    rep(i,m)cin >> b[i];
    int x;
    cin >> x;
    
    vector<bool>mp(x+1);
    rep(i,m)mp[b[i]]=true;

    vector<bool>dp(x+1);
    dp[0]=true;

    for(int i=1;i<=x;i++){
        if(mp[i])continue;
        for(int t:a){
            int p=i-t;
            if(p>=0 && dp[p])dp[i]=true;
        }
    }
    if(dp[x]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}