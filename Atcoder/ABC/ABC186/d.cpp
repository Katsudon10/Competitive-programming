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
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    sort(ALL(A));
    ll s=0;
    ll ans=0;
    rep(j,n){
        ans+=(ll)A[j]*j;
        ans-=s;
        s+=A[j];
    }
    cout << ans << endl;
    return 0;
}