#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    n%=10;
    if(n==3){
        cout << "bon" << endl;
    }else if(n==0 || n==1 || n==6 || n==8){
        cout << "pon" << endl;
    }else{
        cout << "hon" << endl;
    }
    return 0;
}