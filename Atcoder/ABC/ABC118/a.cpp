#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    if(b%a==0){
        cout << a+b << endl;
    }else{
        cout << b-a << endl;
    }
    return 0;
}