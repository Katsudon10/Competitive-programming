#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b;
    cin >> a >> b;
    if(2*a==b || 2*a+1==b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}