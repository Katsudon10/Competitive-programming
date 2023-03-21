#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n%2==0){
        cout << n << endl;
    }else{
        cout << 2*n << endl;
    }
    return 0;
}