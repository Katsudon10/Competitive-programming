#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll k,a,b;
    cin >> k >> a >> b;
    ll na=0,nb=0;
    int i=1;
    while(a>0){
        na+=a%10*i;
        i*=k;
        a/=10;
    }
    i=1;
    while(b>0){
        nb+=b%10*i;
        i*=k;
        b/=10;
    }
    cout << na*nb << endl;
    return 0;
}