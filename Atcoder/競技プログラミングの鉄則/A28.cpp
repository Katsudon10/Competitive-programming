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
    int n;
    cin >> n;
    vector<char>T(n);
    vector<int>A(n);
    rep(i,n)cin >> T[i] >> A[i];

    ll ans=0;
    rep(i,n){
        if(T[i]=='+')ans+=A[i];
        if(T[i]=='-')ans-=A[i];
        if(T[i]=='*')ans*=A[i];
        if(ans<0)ans+=10000;
        ans%=10000;
        cout << ans << endl;
    }
    return 0;
}