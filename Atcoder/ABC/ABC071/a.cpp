#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,a,b;
    cin >> x >> a >> b;
    if(abs(a-x)<abs(b-x)){
        cout << 'A' << endl;
    }else{
        cout << 'B' << endl;
    }
    return 0;
}