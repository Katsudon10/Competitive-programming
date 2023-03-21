#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    if(s.substr(s.size()-2,2)=="er"){
        cout << "er" << endl;
    }else if(s.substr(s.size()-3,3)=="ist"){
        cout << "ist" << endl;
    }
    return 0;
}