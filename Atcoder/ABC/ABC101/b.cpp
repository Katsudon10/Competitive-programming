#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n;
    cin >> n;
    int num=n;
    int s=0;
    while(num!=0){
        s+=num%10;
        num/=10;
    }
    if(n%s==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}