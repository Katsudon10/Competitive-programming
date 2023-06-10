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
    vector<ll>A(n);
    rep(i,n)cin >> A[i];
    int q;
    cin >> q;
    vector<ll>L(q),R(q);
    rep(i,q)cin >> L[i] >> R[i];
    vector<ll>T(n-1,0);

    for(int i=1;i<n-1;i++){
        int t=0;
        if(i%2==1)t=A[i+1]-A[i];
        T[i]=t+T[i-1];
    }

    rep(i,q){
        ll ans=0;
        int Mint=upper_bound(ALL(A),L[i])-A.begin();
        int Maxt=lower_bound(ALL(A),R[i])-A.begin();
        ans=T[Maxt-1];
        if(Mint%2==0)ans-=L[i]-A[Mint-1];
        else ans-=T[Mint-1];
        if(Maxt%2==0)ans-=A[Maxt]-R[i];
        else ;
        cout << ans << endl;
    }
    return 0;
}