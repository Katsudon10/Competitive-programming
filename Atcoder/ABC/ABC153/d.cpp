#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll h;
    cin >> h;
    ll ans=0;
    int i=0;
    while(h>0){
        ans+=pow(2,i);
        h/=2;
        i++;
    }
    cout << ans << endl;
    return 0;
}