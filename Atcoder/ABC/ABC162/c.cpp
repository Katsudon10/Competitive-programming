#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int gcd(int a,int b){
    if(a%b==0){
        return b;
    }else{
        return gcd(b,a%b);
    }
}

int main(){
    int k;
    cin >> k;
    int ans=0;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            for(int l=1;l<=k;l++){
                ans+=gcd(gcd(i,j),l);
            }
        }
    }
    cout << ans << endl;
    return 0;
}