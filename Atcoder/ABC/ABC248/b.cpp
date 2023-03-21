#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    long long int a,b,k;
    cin >> a >> b >> k;
    int ans=0;
    while(a<b){
        a*=k;
        ans++;
    }
    cout << ans << endl;
    return 0;
}