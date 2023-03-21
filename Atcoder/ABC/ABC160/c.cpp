#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int k,n;
    cin >> k >> n;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    A.push_back(A[0]+k);
    int m=0;
    rep(i,n){
        m=max(A[i+1]-A[i],m);
    }
    cout << k-m << endl;;
    return 0;
}