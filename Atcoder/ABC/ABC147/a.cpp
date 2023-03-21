#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b+c<=21){
        cout << "win" << endl;
    }else{
        cout << "bust" << endl;
    }
    return 0;
}