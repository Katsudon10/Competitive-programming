#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int l,r;
    string s;
    cin >> l >> r >> s;
    l--;
    reverse(s.begin()+l,s.begin()+r);
    cout << s << endl;
    return 0;
}