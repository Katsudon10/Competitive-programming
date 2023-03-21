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
    int n;
    ll sum_n=0;
    cin >> n;
    vector<int>A(n);
    rep(i,n){
        cin >> A[i];
        sum_n+=A[i];
    }
    ll x;
    cin >> x;
    ll ans=0;
    ans+=x/sum_n*n;
    x%=sum_n;
    rep(i,n){
        if(x<0)break;
        x-=A[i];
        ans++;
    }
    cout << ans << endl;
    return 0;
}