#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s,t;
    cin >> s >> t;
    int ans=inf;
    rep(i,s.size()-t.size()+1){
        string tmp=s.substr(i,t.size());
        int n=0;
        rep(j,t.size()){
            if(tmp[j]!=t[j])n++;
        }
        ans=min(ans,n);
    }
    cout << ans << endl;
    return 0;
}