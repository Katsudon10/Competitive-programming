#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    rep(i,19){
        if(s[i]==','){
            cout << ' ';
        }else{
            cout << s[i];
        }
    }
    cout << endl;
    return 0;
}