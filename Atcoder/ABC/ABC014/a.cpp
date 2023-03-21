#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    if(a%b==0){
        cout << 0 << endl;
    }else{
        cout << b-a%b << endl;
    }
    return 0;
}