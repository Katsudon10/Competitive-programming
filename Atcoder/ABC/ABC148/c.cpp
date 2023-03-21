#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

ll gcd(int a,int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    ll a,b;
    cin >> a >> b;
    cout << a*b/gcd(a,b) << endl;
    return 0;
}