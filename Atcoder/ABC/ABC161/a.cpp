#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    swap(x,y);
    swap(x,z);
    cout << x << ' ' << y << ' ' << z;
    return 0;
}