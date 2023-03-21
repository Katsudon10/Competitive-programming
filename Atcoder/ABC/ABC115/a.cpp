#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int d;
    cin >> d;
    if(d==25){
        cout << "Christmas" << endl;
    }else if(d==24){
        cout << "Christmas Eve" << endl;
    }else if(d==23){
        cout << "Christmas Eve Eve" << endl;
    }else if(d==22){
        cout << "Christmas Eve Eve Eve" << endl;
    }
    return 0;
}