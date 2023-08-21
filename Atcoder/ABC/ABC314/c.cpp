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
    int n,m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int>c(n);
    rep(i,n)cin >> c[i];
    vector<vector<int>>p(m);
    rep(i,n)p[c[i]-1].push_back(i);

    string ans=s;
    rep(i,m){
        int l=p[i].size();
        rep(j,l){
            ans[p[i][(j+1)%l]]=s[p[i][j]];
        }
    }
    cout << ans << endl;
    return 0;
}