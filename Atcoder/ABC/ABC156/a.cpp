#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,r;
    cin >> n >> r;
    if(n>=10){
        cout << r << endl;
    }else{
        cout << r+100*(10-n) << endl;
    }
    return 0;
}