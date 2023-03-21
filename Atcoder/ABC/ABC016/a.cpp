#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int m,d;
    cin >> m >> d;
    if(m%d==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}