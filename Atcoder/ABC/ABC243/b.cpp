#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int n;
    int num1=0,num2=0;
    cin >> n;
    vector<int>a(n),b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    
    rep(i,n) {
        if(a[i]==b[i]) num1++;
        rep(j,n){
            if(a[i]==b[j] && i!=j ) num2++;
        }
    }
    cout << num1 << endl;
    cout << num2 << endl;
    return 0;
}