#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int ca=0,cb=0,cc=0;
    rep(i,n){
        int p;
        cin >> p;
        if(p<=a){
            ca++;
        }else if(p<=b){
            cb++;
        }else{
            cc++;
        }
    }
    cout << min(ca,min(cb,cc)) << endl;
    return 0;
}