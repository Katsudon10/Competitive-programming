#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    vector<ll>L(n+1);
    L[0]=2;
    L[1]=1;
    for(int i=2;i<n+1;i++){
        L[i]=L[i-2]+L[i-1];
    }
    cout << L[n] << endl;
    return 0;
}