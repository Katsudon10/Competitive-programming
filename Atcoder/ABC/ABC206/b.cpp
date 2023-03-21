#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    ll num=0;
    int i=1;
    while(num<n){
        num+=i;
        i++;
    }
    cout << i-1 << endl;
    return 0;
}