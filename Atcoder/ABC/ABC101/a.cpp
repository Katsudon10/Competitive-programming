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
    rep(i,4){
        if(s[i]=='+'){
            ans++;
        }else{
            ans--;
        }
    }
    cout << ans << endl;
    return 0;
}