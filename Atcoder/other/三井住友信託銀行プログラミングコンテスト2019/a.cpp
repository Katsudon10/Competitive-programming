#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;
    if(m2=m1+1 && d2==1){
        cout << 1 << endl;
    }else if(m2==1 && m2==12 && d2==1){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
    return 0;
}