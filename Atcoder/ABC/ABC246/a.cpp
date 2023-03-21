#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    vector<int>x(3),y(3);
    rep(i,3) cin >> x[i] >> y[i];
    int ansx,ansy;
    if(x[0]==x[1]) ansx=x[2];
    if(x[0]==x[2]) ansx=x[1];
    if(x[1]==x[2]) ansx=x[0];

    if(y[0]==y[1]) ansy=y[2];
    if(y[0]==y[2]) ansy=y[1];
    if(y[1]==y[2]) ansy=y[0];

    cout << ansx << ' ' << ansy << endl;
    return 0;
}