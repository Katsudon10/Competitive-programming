#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,a;
    cin >> n >> a;
    int num=n%500;
    if(a>=num){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}