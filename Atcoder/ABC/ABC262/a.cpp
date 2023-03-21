#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int y;
    cin >> y;
    if(y%4==2){
        cout << y << endl;
    }else{
        if(y%4==1){
            cout << y+1 << endl;
        }else if(y%4==0){
            cout << y+2 << endl;
        }else{
            cout << y+3 << endl;
        }
    }
    return 0;
}