#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a+b==c && a-b==c){
        cout << '?' << endl;
    }else if(a+b==c){
        cout << '+' << endl;
    }else if(a-b==c){
        cout << '-' << endl;
    }else{
        cout << '!' << endl;
    }
    return 0;
}