#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    cout << min(a,b)+min(c,d) << endl;
    return 0;
}