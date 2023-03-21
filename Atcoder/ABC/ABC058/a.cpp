#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(b-a==c-b){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}