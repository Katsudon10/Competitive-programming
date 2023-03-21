#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    int k=(a+b)/2;
    if(abs(a-k)==abs(b-k)){
        cout << k << endl;
    }else{
        cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}