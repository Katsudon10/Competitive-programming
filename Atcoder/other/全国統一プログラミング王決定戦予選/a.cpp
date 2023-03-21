#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ans=0;
    cout << min(a,b) << ' ' << max(a+b-n,0) << endl;
    return 0;
}