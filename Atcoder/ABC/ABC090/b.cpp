#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b;
    cin >> a >> b;
    int ans=0;
    for(int i=a;i<=b;i++){
        int num=i%100/10+i%10*10;
        if(i/1000==num)ans++;
    }
    cout << ans << endl;
    return 0;
}