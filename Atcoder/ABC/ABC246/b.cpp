#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b;
    cin >> a >> b;
    double c=pow(a*a+b*b,0.5);
    cout << fixed << setprecision(8) << a/c << ' ' << b/c << endl;
    return 0;
}