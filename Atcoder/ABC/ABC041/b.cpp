#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    ll a,b,c;
    cin >> a >> b >> c;
    const ll n=pow(10,9)+7;
    cout << (a%n)*(b%n)%n*(c%n)%n << endl;
    return 0;
}