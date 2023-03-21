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
    int n,m;
    cin >> n >> m;
    vector<bool>a(n);
    rep(i,m){
        int j;
        cin >> j;
        a[j-1]=true;
    }
    vector<int>ans(n);
    iota(ans.begin(),ans.end(),1);
    
    int cnt=0;
    auto it=ans.begin();
    rep(i,n){
        if(a[i])cnt++;
        else{
            reverse(it,it+cnt+1);
            it+=cnt+1;
            cnt=0;
        }
    }
    rep(i,n)cout << ans[i] << ' ';
    return 0;
}