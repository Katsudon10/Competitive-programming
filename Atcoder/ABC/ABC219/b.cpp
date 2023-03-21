#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    vector<string>str(3);
    string t;
    rep(i,3) cin >> str[i];
    cin >> t;
    rep(i,t.size()){
        cout << str[t.at(i)-'1'];
    }
    cout << endl;
    return 0;
}