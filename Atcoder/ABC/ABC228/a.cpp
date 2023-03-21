#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int s,t,x;
    cin >> s >> t >> x;
    if(s<t){
        if(x>=s && x<t){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }else{
        if(x>=s || x<t){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}