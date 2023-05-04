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
ll Power(ll a,ll b){
    ll p=a,ans=1;
    rep(i,30){
        ll w=(1<<i);
        if((b/w)%2==1){
            ans=ans*p%1000000007;
        }
        p=p*p%1000000007;
    }
    return ans;
}

int main(){
    ll a,b;
    cin >> a >> b;
    cout << Power(a,b) << endl;
    return 0;
}