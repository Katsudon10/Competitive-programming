#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y,n;
    cin >> x >> y >> n;
    if(x<=y/3){
        cout << x*n << endl;
    }else{
        cout << y*(n/3)+x*(n%3) << endl;
    }
    return 0;
}