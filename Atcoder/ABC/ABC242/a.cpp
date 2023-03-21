#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    long double a,b,c,x;
    cin >> a >> b >> c >> x;
    if(x<=a){
        cout << fixed << setprecision(8) << 1.000000000000 << endl;
    }else if(a<x && x<=b){
        cout << fixed << setprecision(8) << c*1.000000000000/(b-a) <<endl;
    }else{
        cout << fixed << setprecision(8) << 0.000000000000 << endl;
    }
    return 0;
}