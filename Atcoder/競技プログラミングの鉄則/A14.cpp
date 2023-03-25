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
    vector<int>A(n),B(n),C(n),D(n);
    rep(i,n)cin >> A[i];
    rep(i,n)cin >> B[i];
    rep(i,n)cin >> C[i];
    rep(i,n)cin >> D[i];
    vector<int>P,Q;
    rep(i,n)rep(j,n)P.push_back(A[i]+B[j]);
    rep(i,n)rep(j,n)Q.push_back(C[i]+D[j]);

    sort(ALL(Q));

    rep(i,n*n){
        int pos=lower_bound(ALL(Q),k-P[i])-Q.begin();
        if(pos<Q.size() && Q[pos]==k-P[i]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}