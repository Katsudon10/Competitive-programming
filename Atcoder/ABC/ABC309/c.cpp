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
    int n,k;
    cin >> n >> k;
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    P p;
    rep(i,n)p.emplace_back(A[i],B[i]);
    sort(ALL(p));
    ll cnt=0;

    rep(i,n)cnt+=B[i];
    while (true)
    {
        
    }
    
    return 0;
}