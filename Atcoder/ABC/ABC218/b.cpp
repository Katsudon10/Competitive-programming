#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int p;
    rep(i,26){
        cin >> p;
        cout << char('a'+p-1);
    }
    cout << "\n";
    return 0;
}