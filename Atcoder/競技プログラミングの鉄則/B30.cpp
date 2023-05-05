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
        ll w=(1LL<<i);
        if(((1000000007-2)/w)%2==1){
            ans=ans*p%1000000007;
        }
        p=p*p%1000000007;
    }
    return ans;
}

ll Div(ll a,ll b){
    return (a*Power(b,1000000007))%1000000007;
}

int main(){
    ll h,w;
    cin >> h >> w;
    ll n=h+w-2,r=h-1;
    ll a=1;
    for(int i=1;i<=n;i++)a=(a*i)%1000000007;
    ll b=1;
    for(int i=1;i<=r;i++)b=(b*i)%1000000007;
    for(int i=1;i<=n-r;i++)b=(b*i)%1000000007;

    cout << Div(a,b) << endl;
    return 0;
}