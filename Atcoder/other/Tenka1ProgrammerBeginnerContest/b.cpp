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
    vector<int>A(n),B(n);
    rep(i,n)cin >> A[i] >> B[i];
    ll cnt=-1,ans=0;
    rep(i,n){
        if(cnt<A[i]){
            cnt=A[i];
            ans=B[i];
        }
    }
    cout << cnt+ans << endl;
    return 0;
}