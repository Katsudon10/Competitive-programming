#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    double x=0,y=1;
    rep(i,n){
        int a;
        cin >> a;
        x+=1.0/a;
    }
    cout << fixed << setprecision(10) << y/x << endl;
    return 0;
}