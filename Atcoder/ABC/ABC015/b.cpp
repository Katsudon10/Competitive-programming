#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    int n;
    cin >> n;
    int a=0,num=0;
    rep(i,n){
        int A;
        cin >> A;
        if(A!=0){
            num++;
            a+=A;
        }
    }
    cout << (a+num-1)/num << endl;
    return 0;
}