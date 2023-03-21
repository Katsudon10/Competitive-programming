#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    if(n%400==0){
        cout << "YES" << endl;
    }else if(n%100==0){
        cout << "NO" << endl;
    }else if(n%4==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}