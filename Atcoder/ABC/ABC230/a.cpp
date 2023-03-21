#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n>=42){
        cout << "AGC0" << n+1 << endl;
    }else if(n<10){
        cout << "AGC00" << n << endl;
    }else{
        cout << "AGC0" << n << endl;
    }
    
    return 0;
}