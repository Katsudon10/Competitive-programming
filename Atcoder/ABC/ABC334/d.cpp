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
    int n,q;
    cin >> n >> q;
    vector<ll>r(n);
    rep(i,n)cin >> r[i];

    sort(ALL(r));
    vector<ll>s(n,0);
    s[0]=r[0];
    for(int i=1;i<n;i++)s[i]+=s[i-1]+r[i];
    rep(i,q){
        ll x;
        cin >> x;
        int v=upper_bound(ALL(s),x)-s.begin();
        cout << v << endl;
    }
    return 0;
}