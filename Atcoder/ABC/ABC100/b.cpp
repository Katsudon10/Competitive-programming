#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int d,n;
    cin >> d >> n;
    int num=pow(100,d);
    int i=1;
    int a=0;
    while(true){
        if(i%num==0) a++;
        if(d==0 && i%100==0)a--;
        if(d==1 && i%10000==0)a--;
        if(d==2 && i%1000000==0)a--;
        if(a==n){
            cout << i << endl;
            return 0;
        }
        i++;
    }
    return 0;
}