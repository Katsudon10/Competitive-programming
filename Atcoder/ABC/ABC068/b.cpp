#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int num=1;
    while(num<=n/2){
        num*=2;
    }
    cout << num << endl;
    return 0;
}