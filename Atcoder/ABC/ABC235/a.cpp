#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int a,b,c;
    a=n/100;
    n-=a*100;
    b=n/10;
    n-=b*10;
    c=n;
    cout << 111*b+111*a+111*c << endl;
    return 0;
}