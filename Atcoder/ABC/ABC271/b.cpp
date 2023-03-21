#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,q;
    cin >> n >> q;
    vector<vector<int>>A(n);
    rep(i,n){
        int l;
        cin >> l;
        A[i]=vector<int>(l);
        rep(j,l) cin >> A[i][j];
    }
    rep(i,q){
        int s,t;
        cin >> s >> t;
        cout << A[s-1][t-1] << '\n';
    }
    return 0;
}