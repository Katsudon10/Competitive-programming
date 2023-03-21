#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int n,s,d,x,y;
    bool tf=false;
    cin >> n >> s>>d;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        if(x<s && y>d){
            tf=true;
            break;
        }
    }
    if(tf){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}