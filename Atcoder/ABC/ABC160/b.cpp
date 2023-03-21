#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int x;
    cin >> x;
    int num=0;
    num+=x/500*1000;
    x-=x/500*500;
    num+=x/5*5;
    cout << num << endl;
    return 0;
}