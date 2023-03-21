#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n>=212){
        cout << 8 << endl;
    }else if(n>=126){
        cout << 6 << endl;
    }else{
        cout << 4 << endl;
    }
    return 0;
}