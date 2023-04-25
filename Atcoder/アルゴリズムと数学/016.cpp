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
int gcd(int a,int b){
    while(a>0){
        if(a<b)swap(a,b);
        a%=b;
    }
    return b;
}

int main(){
    int n;
    cin >> n;
    vector<ll>A(n);
    rep(i,n)cin >> A[i];
    ll ans=A[0];
    for(int i=1;i<n;i++){
        ans=gcd(ans,A[i]);
    }
    cout << ans << endl;
    return 0;
}