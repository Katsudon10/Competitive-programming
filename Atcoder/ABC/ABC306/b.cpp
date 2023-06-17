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

int main(){
    vector<ll>A(63);
    rep(i,64)cin >> A[i];
    unsigned long long ans=0;
    vector<ll>n2(64);
    n2[0]=1;
    for(int i=1;i<64;i++)n2[i]=n2[i-1]*2;
    rep(i,64){
        ans+=(ll)A[i]*n2[i];
    }
    cout << ans << endl;
    return 0;
}