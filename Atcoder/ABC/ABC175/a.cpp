#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int ans=0;
    if(s[0]=='R' && s[0]==s[1] && s[1]==s[2]){
        ans=3;
    }else if((s[0]=='R' && s[0]==s[1]) || (s[1]=='R' && s[1]==s[2])){
        ans=2;
    }else if(s[0]=='R' || s[1]=='R' || s[2]=='R'){
        ans=1;
    }
    cout << ans << endl;
    return 0;
}