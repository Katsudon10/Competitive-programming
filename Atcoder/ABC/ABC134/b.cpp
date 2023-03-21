#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,d;
    cin >> n >> d;
    cout << n/(2*d+1)+min(1,n%(2*d+1)) << endl;
    return 0;
}