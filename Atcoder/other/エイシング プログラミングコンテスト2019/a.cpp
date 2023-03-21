#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,h,w;
    cin >> n >> h >> w;
    cout << (n-h+1)*(n-w+1) << endl;
    return 0;
}