#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >>c;
    int num=a*100+b*10+c;
    if(num%4==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}