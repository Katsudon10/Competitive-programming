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
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    
    rep(i,n)if(a[i]!=-1)a[i]--;

    vector<int>v(n);
    rep(i,n)if(a[i]!=-1)v[a[i]]=i;

    int s=-1;
    rep(i,n)if(a[i]==-1)s=i;
    vector<int>ans;
    ans.push_back(s+1);
    rep(i,n-1){
        s=v[s];
        ans.push_back(s+1);
    }
    rep(i,n)cout << ans[i] << ' ';
    cout << endl;
    return 0;
}