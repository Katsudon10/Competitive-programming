#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int zn;
    rep(i,s.size()){
        if(s[i]=='Z')zn=i;
    }
    rep(i,s.size()){
        if(s[i]=='A'){
            cout << max(0,zn-i+1) << endl;
            return 0;
        }
    }
    return 0;
}