#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>a(n),num(n);
    rep(i,n) cin >> a[i];
    rep(i,n) num[a[i]-1]=i+1;
    rep(i,n){
        if(i!=0) cout << " ";
        cout << num[i];
    }
    cout << "\n";
    return 0;
}