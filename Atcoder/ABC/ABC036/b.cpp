#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<string>s(n);
    rep(i,n)cin >> s[i];
    rep(i,n){
        for(int j=n-1;j>=0;j--){
            cout << s[j][i];
        }
        cout << endl;
    }
    return 0;
}