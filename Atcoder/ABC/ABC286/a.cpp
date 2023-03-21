#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;
    p--;
    q--;
    r--;
    s--;
    vector<int>A(n);
    rep(i,n)cin >> A[i];
    vector<int>B,C;
    for(int i=p;i<=q;i++)B.push_back(A[i]);
    for(int i=r;i<=s;i++)C.push_back(A[i]);
    rep(i,n){
        if(i>=p && i<=q){
            cout << C[i-p] << ' ';
        }else if(i>=r && i<=s){
            cout << B[i-r] << ' ';
        }else{
            cout << A[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}