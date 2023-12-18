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
ll f(ll n){
    return (1+n)*n/2;
}

ll f2(ll n,ll a){
    return f(n/a)*a;
}

ll gcd(ll a,ll b){
    if(a%b==0)return b;
    else return gcd(b,a%b);
}

ll lcm(ll a,ll b){
    return a*b/gcd(a,b);
}

int main(){
    ll n,a,b;
    cin >> n >> a >> b;
    ll ans=f(n);
    ans-=f2(n,a);
    ans-=f2(n,b);
    ans+=f2(n,lcm(a,b));
    cout << ans << endl;
    return 0;
}