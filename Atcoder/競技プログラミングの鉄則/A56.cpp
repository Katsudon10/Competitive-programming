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

ll n,q;
string s;
vector<ll>T(200001),H(200001);
vector<ll>power(200001);
vector<int>a(200001),b(200001),c(200001),d(200001);
ll mod=2147483647;

ll Hash_value(int l,int r){
    ll val=H[r]-(H[l-1]*power[r-l+1]%mod);
    if(val<0)val+=mod;
    return val;
}

int main(){
    cin >> n >> q;
    cin >> s;
    for(int i=1;i<=q;i++)cin >> a[i] >> b[i] >> c[i] >> d[i];
    for(int i=1;i<=n;i++)T[i]=(s[i-1]-'a')+1;
    
    power[0]=1;
    for(int i=1;i<=n;i++)power[i]=100LL*power[i-1]%mod;
    
    H[0]=0;
    for(int i=1;i<=n;i++)H[i]=(100LL*H[i-1]+T[i])%mod;

    for(int i=1;i<=q;i++){
        ll hash1=Hash_value(a[i],b[i]);
        ll hash2=Hash_value(c[i],d[i]);
        if(hash1==hash2)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}