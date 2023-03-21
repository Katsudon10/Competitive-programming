#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,m;
    cin >> n >> m;
    vector<int>A(m);
    rep(i,n){
        int k;
        cin >> k;
        rep(j,k){
            int a;
            cin >> a;
            A[a-1]++;
        }
    }
    int ans=0;
    rep(i,m){
        if(A[i]==n)ans++;
    }
    cout << ans << endl;
    return 0;
}