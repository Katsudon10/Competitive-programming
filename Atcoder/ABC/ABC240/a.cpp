#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    if(abs(a-b)==1){
        cout << "Yes" << endl;
    }else{
        if((a==1 && b==10)||(a==10 && b==1)){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
        
    }
    return 0;
}