#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    long long x;
    long long ans=0;
    cin >> x;
    long long tyokin=100;
    while(tyokin<x){
        tyokin+=tyokin/100;
        ans++;
    }
    cout << ans << endl;
    return 0;
}