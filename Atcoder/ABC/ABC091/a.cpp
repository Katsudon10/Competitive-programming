#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b>=c){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}