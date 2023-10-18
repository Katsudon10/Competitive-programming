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
    map<int,int>mp;
    rep(i,n)mp[a[i]]++;
    ll cnt=0;
    rep(i,n+1){
        int c=mp[i];
        cnt+=c*(c-1)/2;
    }

    rep(i,n){
        int c=mp[a[i]];
        ll ans=cnt;
        ans-=c*(c-1)/2;
        ans+=(c-1)*(c-2)/2;
        cout << ans << endl;
    }

    return 0;
}