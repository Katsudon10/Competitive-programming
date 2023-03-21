#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int v,t,s,d;
    cin >> v >> t >> s >> d;
    int num1=v*t;
    int num2=v*s;
    if(num1>d || num2<d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }    
    return 0;
}