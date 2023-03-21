#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a;
    rep(i,5){
        cin >> a;
        if(a==0){
            cout << i+1 << endl;
        }
    }
    return 0;
}