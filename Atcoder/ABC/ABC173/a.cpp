#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n%1000==0){
        cout << 0 << endl;
    }else{
        cout << (n/1000+1)*1000-n << endl;
    }
    return 0;
}