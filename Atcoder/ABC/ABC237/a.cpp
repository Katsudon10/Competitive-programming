#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    long long n;
    cin >> n;
    long long x=1ll<<31;
    if(-x<=n && n<x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}