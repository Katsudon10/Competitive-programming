#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,x;
    cin >> n >> x;
    cout << min(x-1,n-x) << endl;
    return 0;
}