#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    ll x;
    cin >> x;
    if(x>=0){
        cout << x/10 << endl;
    }else{
        cout << (x-9)/10 << endl;
    }
    return 0;
}