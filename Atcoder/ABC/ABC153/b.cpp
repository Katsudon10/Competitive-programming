#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int h,n;
    cin >> h >> n;
    int dmg=0;
    rep(i,n){
        int a;
        cin >> a;
        dmg+=a;
    }
    if(dmg>=h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}