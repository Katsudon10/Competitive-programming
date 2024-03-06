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

map<ll,ll>mp;
ll f(ll n){
    if(n==1)return 0;
    if(mp.count(n))return mp[n];
    mp[n]=f(n/2)+f((n+1)/2)+n;
    return mp[n];
}

int main(){
    ll n;
    cin >> n;
    cout << f(n) << endl;
    return 0;
}