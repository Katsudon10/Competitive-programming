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
    int m;
    cin >> m;
    vector<string>t(m);
    rep(i,m)cin >> t[i];

    map<string,int>smp,tmp;
    rep(i,n)smp[s[i]]++;
    rep(i,m)tmp[t[i]]++;

    int ans=0;
    for(auto p:smp){
        ans=max(ans,smp[p.first]-tmp[p.first]);
    }
    cout << ans << endl;
    return 0;
}