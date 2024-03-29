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

int main(){
    int n;
    cin >> n;
    vector<int>A(n);
    ll cnt=0;
    rep(i,n){
        cin >> A[i];
        cnt+=A[i];
    }
    ll a=cnt/n,b=cnt/n+1;
    ll ans=0;
    rep(i,n){
        ans+=max(a-A[i],A[i]-b);
    }
    cout << (ans+1)/2 << endl;
    return 0;
}