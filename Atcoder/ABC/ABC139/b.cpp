#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
 
int main(){
    int a,b;
    cin >> a >> b;
    int num=1,ans=0;
    while(num<b){
        --num;
        num+=a;
        ans++;
    }
    cout << ans << endl;
}