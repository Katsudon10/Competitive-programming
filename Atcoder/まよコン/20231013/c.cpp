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
    int k,s;
    cin >> k >> s;
    ll ans=0;
    rep(i,k+1)rep(j,k+1){
        int n=s-i-j;
        if(n>=0 && n<=k)ans++;
    }
    cout << ans << endl;
    return 0;
}