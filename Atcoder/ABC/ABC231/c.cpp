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
    int n,q;
    cin >> n >> q;
    vector<int>a(n);
    rep(i,n)cin >> a[i];
    sort(a.begin(),a.end());
    rep(i,q){
        int x;
        cin >> x;
        cout << a.end()-lower_bound(ALL(a),x) << endl;
    }

    return 0;
}