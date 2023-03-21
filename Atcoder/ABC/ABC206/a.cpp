#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    double n;
    cin >> n;
    if(int(n*1.08)==206){
        cout << "so-so" << endl;
    }else if(int(n*1.08)>206){
        cout << ":(" << endl;
    }else{
        cout << "Yay!" << endl;
    }
    return 0;
}