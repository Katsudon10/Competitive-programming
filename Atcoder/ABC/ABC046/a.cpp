#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a==b && b==c){
        cout << 1 << endl;
    }else if(a!=b && b!=c && a!=c){
        cout << 3 << endl;
    }else{
        cout << 2 << endl;
    }
    return 0;
}