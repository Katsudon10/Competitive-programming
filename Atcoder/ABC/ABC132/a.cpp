#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    if(s[0]==s[1] && s[2]==s[3] && s[1]!=s[2]){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}