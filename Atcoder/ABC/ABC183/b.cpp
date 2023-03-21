#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double sx,sy,gx,gy;
    cin >> sx >> sy >> gx >> gy;
    
    cout << fixed << setprecision(10) << (sy*gx+gy*sx)/(sy+gy) << endl;
    return 0;
}