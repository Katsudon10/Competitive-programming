#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    const double pi = acos(-1.0);
    double a,b,d;
    cin >> a >> b >> d;
    double r=sqrt(a*a+b*b);
    double theta=atan2(b,a);
    theta+=d*pi/180.0;
    cout << fixed << setprecision(10) << r*cos(theta) << ' ' << r*sin(theta) << endl;
}