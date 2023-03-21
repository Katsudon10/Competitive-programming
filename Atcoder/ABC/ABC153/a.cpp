#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h,a;
    cin >> h >> a;
    if(h%a==0){
        cout << h/a << endl;
    }else{
        cout << (h+a)/a << endl;
    }
    return 0;
}