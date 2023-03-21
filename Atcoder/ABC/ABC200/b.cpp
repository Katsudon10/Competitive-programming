#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    long long int n,k;
    cin >> n >> k;
    rep(i,k){
        if(n%200==0){
            n/=200;
        }else{
            n=n*1000+200;
        }
    }
    cout << n << endl;
    return 0;
}