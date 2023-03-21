#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    set<string>str;
    rep(i,4){
        cin >> s;
        str.insert(s);
    }
    if(str.size()==4){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}