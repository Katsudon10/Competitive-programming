#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    while(n>0){
        if(n%10==9){
            cout << "Yes" << endl;
            return 0;
        } 
        n/=10;
    }
    cout << "No" << endl;
    return 0;
}