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
    vector<int>cnt(100,0);
    rep(i,n)cnt[A[i]%100]++;
    ll ans=0;
    ans=(ll)cnt[0]*(cnt[0]-1)/2;
    for(int i=1;i<50;i++){
        ans+=(ll)cnt[i]*cnt[100-i];
    }
    ans+=(ll)cnt[50]*(cnt[50]-1)/2;
    cout << ans << endl;
    return 0;
}