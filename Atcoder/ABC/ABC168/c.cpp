#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,h,m;
    cin >> a >> b >> h >> m;
    double x=min(h*30+m*0.5-m*6,360-(h*30+m*0.5-m*6));
    double c2=a*a+b*b-2*a*b*cos(x*M_PI/180);
    cout << fixed << setprecision(20) << sqrt(c2) << endl;
    return 0;
}