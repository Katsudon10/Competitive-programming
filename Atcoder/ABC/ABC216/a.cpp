#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double x;
    cin >> x;
    int n=x*10;
    int num=int(n%10);
    int ans=n/10;
    if(num>=7){
        cout << ans << '+' << endl;
    }else if(num>=3){
        cout << ans << endl;
    }else{
        cout << ans << '-' << endl;
    }
    return 0;
}