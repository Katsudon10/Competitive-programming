#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    for(string t:{"oxx","xox","xxo"}){
        bool flag=true;
        rep(i,s.size()){
            if(t[i%3]!=s[i])flag=false;
        }
        if(flag){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
