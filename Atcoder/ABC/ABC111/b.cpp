#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    if(n%111==0){
        cout << n << endl;
    }else{
        cout << 111*(n/111+1) << endl;
    }
    return 0;
}