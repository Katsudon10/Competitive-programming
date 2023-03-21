#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>A(n);
    rep(i,n) cin >> A[i];
    int s=0;
    rep(i,n) s+=A[i];
    int cnt=0;
    rep(i,n){
        if(A[i]*4*m>=s)cnt++;
    }
    if(cnt>=m){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}