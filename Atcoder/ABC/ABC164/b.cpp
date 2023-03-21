#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    while(a>0 || c>0){
        c-=b;
        a-=d;
        if(c<=0){
            cout << "Yes" << endl;
            return 0;
        }
        if(a<=0){
            cout << "No" << endl;
            return 0;
        }
    }
    return 0;
}