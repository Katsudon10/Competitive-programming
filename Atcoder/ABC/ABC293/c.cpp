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

int h,w,ans;
vector<vector<int>>a;

void dfs(int i,int j,set<int>s){
    if(s.count(a[i][j]))return;
    s.insert(a[i][j]);
    if(i==h-1 && j==w-1){
        ans++;
        return;
    }
    if(i+1<h)dfs(i+1,j,s);
    if(j+1<w)dfs(i,j+1,s);
}

int main(){
    cin >> h >> w;
    a=vector<vector<int>>(h,vector<int>(w));
    rep(i,h)rep(j,w)cin >> a[i][j];
    
    dfs(0,0,set<int>());

    cout << ans << endl;
    return 0;
}