#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if(s[i]=='1'){
            s[i]='9';
        }else{
            s[i]='1';
        }
    }
    cout << s << endl;
    return 0;
}