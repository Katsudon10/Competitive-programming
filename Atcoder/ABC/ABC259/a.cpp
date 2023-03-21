#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n,m,x,t,d;
    cin >> n >> m >> x >> t >> d;
    if(m>=x){
        cout << t << endl;
    }else{
        cout << t-d*(x-m) << endl;
    }
    return 0;
}