#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int r,d,x2;
    cin >> r >> d >>x2;
    rep(i,10){
        x2=r*x2-d;
        cout << x2 << endl;
    }
    return 0;
}