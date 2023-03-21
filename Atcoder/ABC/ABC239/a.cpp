#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    double h;
    cin >> h;
    double ans=sqrt(h*(12800000+h));
    cout << fixed << setprecision(5) << ans << endl;
    return 0;
}