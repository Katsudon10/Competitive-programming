#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    string str[]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    rep(i,5){
        if(s==str[i]){
            cout << 5-i << endl;
            return 0;
        }
    }
    return 0;
}