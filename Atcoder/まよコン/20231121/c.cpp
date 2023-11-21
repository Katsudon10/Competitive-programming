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
    int n;
    cin >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    int ans=inf;
    rep(x,10){
        char c='0'+x;
        vector<int>num(10);
        rep(i,n){
            rep(j,10)if(s[i][j]==c)num[j]++;
        }

        int now=0;
        rep(i,10){
            int t=i+10*(num[i]-1);
            now=max(now,t);
        }
        ans=min(ans,now);
    }
    cout << ans << endl;
    return 0;
}