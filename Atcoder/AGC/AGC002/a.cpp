#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    ll a,b;
    cin >> a >> b;
    if(a<=0 && b>=0){
        cout << "Zero" << endl;
    }else if(a>0 && b>0){
        cout << "Positive" << endl;
    }else{
        if((a+b)%2==0){
            cout << "Negative" << endl;
        }else{
            cout << "Positive" << endl;
        }
    }
    return 0;
}