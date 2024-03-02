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

bool check(ll v){
    string vs=to_string(v);
    string sr=vs;
    reverse(ALL(sr));
    return vs==sr;
}

int main(){
    ll n;
    cin >> n;
    ll ans=0;
    for(ll i=0;i*i*i<=n;i++){
        if(check(i*i*i))ans=i*i*i;
    }
    cout << ans << endl;
    return 0;
}