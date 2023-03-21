#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,x;
    cin >> a >> b >> x;
    if(x>=a && x<=a+b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}