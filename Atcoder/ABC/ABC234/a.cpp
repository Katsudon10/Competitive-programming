#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int f(int x){
    return x*x+2*x+3;
}

int main(){
    int t;
    cin >> t;
    cout << f(f(f(t)+t)+f(f(t))) << endl;
    return 0;
}