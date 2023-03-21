#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    int num=0;
    string ans;
    rep(i,n){
        int cnt=0;
        rep(j,n){
            if(s[i]==s[j])cnt++;
        }
        if(cnt>num){
            num=cnt;
            ans=s[i];
        }
    }
    cout << ans << endl;
    return 0;
}