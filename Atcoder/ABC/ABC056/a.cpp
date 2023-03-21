#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    char a,b;
    cin >> a >> b;
    if(b=='H'){
        cout << a << endl;
    }else{
        if(a=='H'){
            cout << 'D' << endl;
        }else{
            cout << 'H' << endl;
        }
    }
    return 0;
}