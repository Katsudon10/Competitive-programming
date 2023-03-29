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
    vector<int>h(n);
    rep(i,n)cin >> h[i];
    vector<int>dp(n);
    dp[0]=0;
    for(int i=1;i<n;i++){
        if(i==1){
            dp[i]=abs(h[i]-h[i-1]);
        }else{
            dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
        }
    }

    int p=n-1;
    vector<int>ans;
    while(true){
        ans.push_back(p);
        if(p==0)break;
        if(dp[p-1]+abs(h[p]-h[p-1])==dp[p]){
            p--;
        }else{
            p-=2;
        }
    }
    reverse(ALL(ans));
    cout << ans.size() << endl;
    for(int i:ans){
        cout << i+1 << ' '; 
    }
    cout << endl;
    return 0;
}