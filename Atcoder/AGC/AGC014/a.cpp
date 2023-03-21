#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int ans=0;
    while(a%2==0 && b%2==0 && c%2==0){
        if(a==b && b==c){
            cout << -1 << endl;
            return 0;
        }
        int na=a/2,nb=b/2,nc=c/2;
        a=nb+nc;
        b=na+nc;
        c=na+nb;
        ans++;
    }
    cout << ans << endl;
    
    return 0;
}