#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    rep(i,k){
        if(i%2==0){
            if(a%2==1)a--;
            b+=a/2;
            a/=2;
        }else{
            if(b%2==1)b--;
            a+=b/2;
            b/=2;
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
}