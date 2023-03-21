#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    long long int ans=1;
    rep(i,n) ans*=2;
    cout << ans << endl;
    return 0;
}