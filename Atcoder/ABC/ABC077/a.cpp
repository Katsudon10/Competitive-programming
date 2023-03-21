#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    if(s1[0]==s2[2] && s1[1]==s2[1] && s1[2]==s2[0]){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}