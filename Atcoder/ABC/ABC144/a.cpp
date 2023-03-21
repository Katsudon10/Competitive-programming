#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    if(a>=1 && a<=9 && b>=1 && b<=9){
        cout << a*b << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}