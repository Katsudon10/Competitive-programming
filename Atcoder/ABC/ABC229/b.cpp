#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll a,b;
    cin >> a >> b;
    while(a!=0 && b!=0){
        if(a%10+b%10>=10){
            cout << "Hard" << endl;
            return 0;
        }
        a/=10;
        b/=10;
    }
    cout << "Easy" << endl;
    return 0;
}