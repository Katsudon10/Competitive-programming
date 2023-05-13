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

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>cnt(101,0);
    rep(i,n)cnt[A[i]]++;
    ll ans=0;
    rep(i,101){
        ans+=(ll)cnt[i]*(cnt[i]-1)*(cnt[i]-2)/6;
    }
    cout << ans << endl;
    return 0;
}