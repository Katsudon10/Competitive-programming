#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll a,b,c,d;
    cin >> a >> b >> c >> d;
    if(max(a,c)<=min(b,d)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}