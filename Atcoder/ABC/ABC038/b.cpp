#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int h1,h2,w1,w2;
    cin >> h1 >> w1 >> h2 >> w2;
    if(h1==h2 || w1==h2 || h1==w2 || w1==w2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}