#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>p(n),q(n);
    rep(i,n)cin >> p[i];
    rep(i,n)q[p[i]-1]=i+1;
    rep(i,n){
        if(i!=0)cout << ' ';
        cout << q[i];
    }
    cout << endl;
    return 0;
}