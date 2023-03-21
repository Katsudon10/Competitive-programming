#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int k(int x){
    if(x==0){
        return 1;
    }else{
        return x*k(x-1);
    }
}

int main(){
    int n;
    cin >> n;
    cout << k(n) << endl;
    return 0;
}

