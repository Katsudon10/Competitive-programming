#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int cnt=0;
    for(int i=max(a,b);i>0;i--){
        if(a%i==0 && b%i==0){
            cnt++;
        }
        if(cnt==k){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}