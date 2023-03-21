#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
 
int main(){
    long int n,k;
    cin >> n >> k;
    vector<long int>a(n),b(n),c(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    bool flag=true;
    for(int i=0;i<n-1;i++){
        if(i==0){
            if(abs(a[i]-a[i+1])<=k){
                c[i]=a[i];
            }else if(abs(a[i]-b[i+1])<=k){
                c[i]=a[i];
            }else if(abs(b[i]-a[i+1])<=k){
                c[i]=b[i];
            }else if(abs(b[i]-b[i+1])<=k){
                c[i]=b[i];
            }else{
                flag=false;
            }
        }else{
            if(abs(c[i-1]-a[i]<=k) && abs(a[i]-a[i+1])<=k){
                c[i]=a[i];
            }else if(abs(c[i-1]-a[i]<=k) && abs(a[i]-b[i+1])<=k){
                c[i]=a[i];
            }else if(abs(c[i-1]-b[i]<=k) && abs(b[i]-a[i+1])<=k){
                c[i]=b[i];
            }else if(abs(c[i-1]-b[i]<=k) && abs(b[i]-b[i+1])<=k){
                c[i]=b[i];
            }else{
                flag=false;
            }
        }
    }
    if(abs(c[n-1]-a[n-1])<=k){
        c[n-1]=a[n-1];
    }else if(abs(c[n-1]-b[n-1])<=k){
        c[n-1]=b[n-1];
    }else{
        flag=false;
    }
    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
 
    return 0;
}