#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int r;
    cin >> r;
    if(r<1200){
        cout << "ABC" << endl;
    }else if(r<2800){
        cout << "ARC" << endl;
    }else{
        cout << "AGC" << endl;
    }
    return 0;
}