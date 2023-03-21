#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    rep(i,s.size()){
        if(i==0){
            cout << char(toupper(s[i]));
        }else{
            cout << char(tolower(s[i]));
        }
    }
    cout << endl;
    return 0;
}