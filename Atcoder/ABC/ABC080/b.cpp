#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int num=0;
    int tmp=n;
    while(tmp>0){
        num+=tmp%10;
        tmp/=10;
    }
    if(n%num==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}