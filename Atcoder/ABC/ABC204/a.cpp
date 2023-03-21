#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y;
    cin >> x >> y;
    if(x==y){
        cout << x << endl;
    }else{
        cout << 3-x-y << endl;
    }
    return 0;
}