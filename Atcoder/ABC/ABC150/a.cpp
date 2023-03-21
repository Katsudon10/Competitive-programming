#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int k,x;
    cin >> k >> x;
    if(500*k>=x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}