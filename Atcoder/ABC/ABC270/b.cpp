#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x<0){
        x*=-1;
        y*=-1;
        z*=-1;
    }
    if(x<y || y<0){
        cout << x << endl;
    }else{
        if(z<y){
            cout << abs(z)+abs(x-z) << endl;
        }else{
            cout << -1 << endl;
        }
    }
    return 0;
}