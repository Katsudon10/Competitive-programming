#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double a,b;
    cin >> a >> b;
    bool flag=true;
    double num=1e18;
    double i=0;
    double g=1;
    while(flag){
        double n=1.0*i+(double)(a/sqrt(g));
        cout << n << endl;
        if(num>=n){
            num=n;
        }else{
            flag=false;
        }
        i+=b;
        g++;
    }
    cout << fixed << setprecision(10) << num << endl;
    return 0;
}