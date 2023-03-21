#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int a,b;
    a=n/16;b=n%16;
    if(a>9){
        cout << char('A'+a-10);
    }else{
        cout << a;
    }
    if(b>9){
        cout << char('A'+b-10) << endl;
    }else{
        cout << b << endl;
    }
    return 0;
}