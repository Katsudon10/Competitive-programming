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
    int n,k;
    cin >> n >> k;
    vector<vector<int>>T(n,vector<int>(n));
    rep(i,n)rep(j,n)cin >> T[i][j];
    vector<int>num(n);
    rep(i,n)num[i]=i+1;
    ll ans=0;
    do{
        if(num[0]!=1)break;
        ll cnt=0;
        rep(i,n-1){
            cnt+=T[num[i]-1][num[i+1]-1];
        }
        cnt+=T[num[n-1]-1][0];
        if(cnt==k)ans++;
    }while(next_permutation(ALL(num)));
    cout << ans << endl;
    return 0;
}