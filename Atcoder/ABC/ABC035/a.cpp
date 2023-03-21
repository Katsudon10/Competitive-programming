#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int w,h;
    cin >> w >> h;
    if(w%16==0 && h%9==0){
        cout << "16:9" << endl;
    }else{
        cout << "4:3" << endl;
    }
    return 0;
}