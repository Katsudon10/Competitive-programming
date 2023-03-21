#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,d;
    cin >> a >> d;
    cout << max((a+1)*d,a*(d+1)) << endl;
    return 0;
}