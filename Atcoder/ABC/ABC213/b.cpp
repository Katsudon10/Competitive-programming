#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    rep(i,n)cin >> a[i];
    b=a;
    sort(a.rbegin(),a.rend());
    rep(i,n){
        if(b[i]==a[1])cout << i+1 << endl;
    }
    return 0;
}