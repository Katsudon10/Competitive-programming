#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3]){
        cout << "SAME" << endl;
    }else{
        cout << "DIFFERENT" << endl;
    }
    return 0;
}