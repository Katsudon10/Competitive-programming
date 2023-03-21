#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,x;
    cin >> n >> x;
    vector<int>P(n);
    rep(i,n) cin >> P[i];
    rep(i,n){
        if(P[i]==x) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}