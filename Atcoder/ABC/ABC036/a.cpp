#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    if(b%a==0){
        cout << b/a << endl;
    }else{
        cout << b/a+1 << endl;
    }
    return 0;
}