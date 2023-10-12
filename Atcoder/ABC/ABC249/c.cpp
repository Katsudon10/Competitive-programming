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
    int n,k;
    cin >> n >> k;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    int ans=0;
    rep(i,(1<<n)){
        vector<int>cnt(26);
        rep(j,n){
            if(i>>j & 1){
                for(char c:s[j])cnt[c-'a']++;
            }
        }
        int t=0;
        rep(j,26)if(cnt[j]==k)t++;
        ans=max(ans,t);
    }
    cout << ans << endl;
    return 0;
}