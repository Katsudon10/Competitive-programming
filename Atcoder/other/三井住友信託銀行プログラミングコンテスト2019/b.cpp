#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    
    rep(i,n+1){
        double x=i;
        x=int(x*1.08);
        if(x==n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":\(" << endl;
    return 0;
}