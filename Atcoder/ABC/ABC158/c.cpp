#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b;
    cin >> a >> b;
    rep(n,10000){
        int ta=n*8/100;
        int tb=n*10/100;
        if(a==ta && b==tb){
            cout << n << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}