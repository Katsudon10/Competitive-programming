#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double n;
    cin >> n;
    n=n/3;
    cout << fixed << setprecision(10) << n*n*n << endl;
    return 0;
}