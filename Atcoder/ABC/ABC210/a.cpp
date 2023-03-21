#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a,x,y;
    cin >> n >> a >> x >> y;
    if(n>a){
        cout << (n-a)*y+a*x << endl;
    }else{
        cout << n*x << endl;
    }
    return 0;
}