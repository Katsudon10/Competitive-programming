#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,m;
    cin >> n >> m;
    int num=0;
    rep(i,m){
        int a;
        cin >> a;
        num+=a;
    }
    cout << max(-1,n-num) << endl;
    return 0;
}