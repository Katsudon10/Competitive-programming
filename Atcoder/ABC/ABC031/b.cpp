#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int l,h,n;
    cin >> l >> h >> n;
    rep(i,n){
        int a;
        cin >> a;
        if(a>h){
            cout << -1 << endl;
        }else if(a<l){
            cout << l-a << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}