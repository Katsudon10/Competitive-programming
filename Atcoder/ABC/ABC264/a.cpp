#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string str="atcoder";
    int l,r;
    cin >> l >> r;
    l--;
    int len=r-l;
    cout << str.substr(l,len) << endl;
    return 0;
}