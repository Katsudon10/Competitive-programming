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

int n,q;
string s,rs;
vector<int>L(100001),R(100001);
vector<ll>power(100001);
vector<ll>T(100001),rT(100001);
vector<ll>H(100001),rH(100001);
ll mod=2147483647;

ll hash1(int l,int r){
    ll val=H[r]-(H[l-1]*power[r-l+1]%mod);
    if(val<0)val+=mod;
    return val;
}

ll hash2(int l,int r){
    ll val=rH[n+1-l]-(rH[n-r]*power[r-l+1]%mod);
    if(val<0)val+=mod;
    return val;
}

int main(){
    cin >> n >> q;
    cin >> s;
    for(int i=1;i<=q;i++)cin >> L[i] >> R[i];
    rs=s;
    reverse(ALL(rs));
    for(int i=1;i<=n;i++)T[i]=(int)(s[i-1]-'a')+1;
    for(int i=1;i<=n;i++)rT[i]=(int)(rs[i-1]-'a')+1;

    power[0]=1;
    for(int i=1;i<=n;i++)power[i]=(100LL*power[i-1])%mod;

    H[0]=1;
    for(int i=1;i<=n;i++)H[i]=(100LL*H[i-1]+T[i])%mod;

    rH[0]=1;
    for(int i=1;i<=n;i++)rH[i]=(100LL*rH[i-1]+rT[i])%mod;

    for(int i=1;i<=q;i++){
        ll a1=hash1(L[i],R[i]);
        ll a2=hash2(L[i],R[i]);
        if(a1==a2)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}