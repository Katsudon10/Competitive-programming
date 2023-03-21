#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n>=1000){
        cout << n << endl;
    }else if(n>=100){
        cout << 0 << n << endl;
    }else if(n>=10){
        cout << "00" << n << endl;
    }else{
        cout << "000" << n << endl;
    }
    return 0;
}