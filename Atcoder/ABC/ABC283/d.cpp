#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    set<char>c;
    rep(i,s.size()){
        if('a'>=s[i] && s[i]<='z'){
            if(c.find(s[i])!=c.end()){
                cout << "No" << endl;
            }else{
                c.insert(s[i]);
            }
        }
    }
    return 0;
}