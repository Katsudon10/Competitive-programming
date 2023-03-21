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
    int n,m;
    cin >> n >> m;
    vector<int>A(n),B(m),C;
    rep(i,n)cin >> A[i];
    rep(i,m)cin >> B[i];
    rep(i,n)C.push_back(A[i]);
    rep(i,m)C.push_back(B[i]);
    sort(ALL(C));

    rep(i,n){
        cout << lower_bound(ALL(C),A[i])-C.begin()+1 << ' ';
    }
    cout << endl;
    rep(i,m){
        cout << lower_bound(ALL(C),B[i])-C.begin()+1 << ' ';
    }
    return 0;
}