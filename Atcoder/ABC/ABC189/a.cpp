#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        cout << "Takahashi" << endl;
    }else if(b>a){
        cout << "Aoki" << endl;
    }else{
        if(c==0){
            cout << "Aoki" << endl;
        }else{
            cout << "Takahashi" << endl;
        }
    }
    return 0;
}