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
    ll a,b;
    cin >> a >> b;
    ll ans=a*b/gcd(a,b);
    cout << ans << endl;
    return 0;
}