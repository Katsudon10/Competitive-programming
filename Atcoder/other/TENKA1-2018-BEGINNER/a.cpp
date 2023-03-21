#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    if(s.size()==2){
        cout << s << endl;
    }else{
        cout << s[2] << s[1] << s[0] << endl;
    }
    return 0;
}