#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    if(n%100==0){
        cout << n/100 << endl;
    }else{
        cout << n/100+1 << endl;
    }
    return 0;
}