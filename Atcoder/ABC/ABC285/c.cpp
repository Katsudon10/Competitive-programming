#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    ll ans=0;
    
    for(char c:s){
        ans*=26;
        ans+=int(c-'A')+1;
    }
    cout << ans << endl;
    return 0;
}