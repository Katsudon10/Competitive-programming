#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x;
    cin >> x;
    int ans=0;
    ans+=x/10+x%10;
    cout << ans << endl;
    return 0;
}