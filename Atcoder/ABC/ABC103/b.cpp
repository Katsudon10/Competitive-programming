#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s,t;
    cin >> s >> t;
    rep(i,t.size()){
        if(s==t){
            cout << "Yes" << endl;
            return 0;
        }
        t=t.substr(1,t.size()-1)+t[0];
    }
    cout << "No" << endl;
    return 0;
}