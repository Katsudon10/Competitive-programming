#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s,t;
    cin >> s >> t;
    int n=(t[0]-s[0]+26)%26;
    rep(i,s.size()){
        if(char((s[i]-'a'+n)%26+'a')!=t[i]){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}