#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    set<string>s;
    rep(i,n){
        string str;
        cin >> str;
        s.insert(str);
    }
    cout << s.size() << endl;
    return 0;
}