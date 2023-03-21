#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int x=x2-x1,y=y2-y1;
    cout << x2-y << ' ' << y2+x << ' ' << x1-y << ' ' << y1+x << endl;
    return 0;
}