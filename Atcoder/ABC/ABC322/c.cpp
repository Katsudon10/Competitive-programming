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
    rep(i,m){
        cin >> a[i];
        a[i]--;
    }
    vector<int>ans(n,-inf);
    rep(i,m)ans[a[i]]=0;
    for(int i=n-1;i>0;i--){
        if(ans[i-1]!=0)ans[i-1]=ans[i]+1;
    }

    rep(i,n)cout << ans[i] << endl;
    return 0;
}