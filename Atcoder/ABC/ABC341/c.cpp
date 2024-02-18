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
    int h,w,n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<string>s(h);
    rep(i,h)cin >> s[i];

    int ans=0;
    rep(i,h)rep(j,w){
        if(s[i][j]=='#')continue;
        int ti=i,tj=j;
        rep(k,n){
            char c=t[k];
            if(c=='U')ti--;
            else if(c=='D')ti++;
            else if(c=='R')tj++;
            else if(c=='L')tj--;
            if(s[ti][tj]!='.')break;
            if(k==n-1)ans++;
        }
    }
    cout << ans << endl;
    return 0;
}