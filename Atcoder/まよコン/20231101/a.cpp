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
    vector<int>a(m);
    rep(i,m)cin >> a[i];
    vector<bool>flag(n+1);
    rep(i,m)flag[a[i]]=true;
    vector<int>cnt(n+1);
    for(int i=n;i>0;i--){
        if(!flag[i-1])cnt[i-1]=cnt[i]+1;
        else cnt[i-1]=0;
    }
    rep(i,n)cout << cnt[i+1] << endl;
    return 0;
}