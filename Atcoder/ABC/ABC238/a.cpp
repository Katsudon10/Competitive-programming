#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(pow(2,n)>n*n){
        cout << "Yes" << endl;
    }else{
        cout << "No" <<endl;
    }
    return 0;
}