#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans=1;
    rep(i,n-1){
        if(s[i]!=s[i+1])ans++;
    }
    cout << ans << endl;
    return 0;
}