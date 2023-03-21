#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    string str;
    cin >> str;
    vector<bool>s(10,false);
    rep(i,9){
        s[str.at(i)-'0'] = true;
    }
    rep(i,10){
        if(!s[i]){
            cout << i <<endl;
            return 0;
        } 
    }
}