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
    vector<ll>a(n,0);
    rep(i,n)cin >> a[i];
    rep(i,n-1){
        ll t,s;
        cin >> t >> s;
        a[i+1]+=a[i]/t*s;
    }
    cout << a[n-1] << endl;
    return 0;
}
