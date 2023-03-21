#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int x;
    cin >> x;
    bool flag=true;
    while(flag){
        bool flag2=true;
        for(int i=2;i<x;i++){
            if(x%i==0){
                flag2=false;
                break;
            }
        }
        if(flag2){
            cout << x << endl;
            return 0;
        }
        x++;
    }
    return 0;
}