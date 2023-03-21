#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y;
    cin >> x >> y;
    if(x>=y){
        cout << 0 << endl;
    }else{
        cout << (y-x+9)/10 << endl;
    }
    return 0;
}