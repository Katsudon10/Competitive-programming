#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string a,b;
    cin >> a >> b;
    a+=b;
    cout << 2*stoi(a) << endl;
    return 0;
}