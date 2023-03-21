#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    set<int>n;
    for(int i=a;i<=min(b,a+k-1);i++){
        n.insert(i);
    }
    for(int i=b;i>=max(a,b-k+1);i--){
        n.insert(i);
    }
    
    for(int i:n){
        cout << i << endl;
    }
    return 0;
}