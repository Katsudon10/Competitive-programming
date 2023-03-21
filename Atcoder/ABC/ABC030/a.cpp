#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double a,b,c,d;
    cin >> a >> b >> c >> d;
    if(b/a==d/c){
        cout << "DRAW" << endl;
    }else if(b/a>d/c){
        cout << "TAKAHASHI" << endl;
    }else{
        cout << "AOKI" << endl;
    }
    
    return 0;
}