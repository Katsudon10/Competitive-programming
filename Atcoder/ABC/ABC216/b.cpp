#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<string>s(n),t(n);
    rep(i,n) cin >> s[i] >> t[i];
    string ans="No";
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j] && t[i]==t[j]) ans="Yes";
        }
    }
    cout << ans << endl;
    return 0;
}