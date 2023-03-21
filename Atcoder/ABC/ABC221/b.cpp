#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s,t;
    cin >> s >> t;
    string ans="No";
    if(s==t)ans="Yes";
    rep(i,t.size()-1){
        swap(s[i],s[i+1]);
        if(s==t)ans="Yes";
        swap(s[i],s[i+1]);
    }
    cout << ans << endl;
    return 0;
}