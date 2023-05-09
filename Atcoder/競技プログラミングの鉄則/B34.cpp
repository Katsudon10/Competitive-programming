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
    ll n,x,y;
    cin >> n >> x >> y;
    vector<ll>A(n);
    rep(i,n)cin >> A[i];
    int ans=0;
    rep(i,n){
        if(A[i]%5==0 || A[i]%5==1)ans^=0;
        if(A[i]%5==2 || A[i]%5==3)ans^=1;
        if(A[i]%5==4)ans^=2;
    }
    if(ans!=0)cout << "First" << endl;
    else cout << "Second" << endl;
    return 0;
}