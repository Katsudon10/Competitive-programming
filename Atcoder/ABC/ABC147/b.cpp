#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int n=s.size()-1;
    int ans=0;
    rep(i,s.size()/2){
        if(s[i]!=s[n-i])ans++;
    }
    cout << ans << endl;
    return 0;
}