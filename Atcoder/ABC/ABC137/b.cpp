#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int k,x;
    cin >> k >> x;
    int num=x-k+1;
    rep(i,2*k-1){
        if(i!=0)cout << ' ';
        cout << num;
        num++;
    }
    cout << endl;
    return 0;
}