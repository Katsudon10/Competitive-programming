#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b;
    cin >> a >> b;
    if(a<b)swap(a,b);
    cout << min(abs(a-b),abs(10-a+b)) << endl;;
    return 0;
}