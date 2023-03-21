#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int a,b;
    cin >> a >> b;
    if((a+b)%3==0 || a%3==0 || b%3==0){
        cout << "Possible" << endl;
    }else{
        cout << "Impossible" << endl;
    }
    return 0;
}