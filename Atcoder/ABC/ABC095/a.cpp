#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    int num=700;
    if(s[0]=='o')num+=100;
    if(s[1]=='o')num+=100;
    if(s[2]=='o')num+=100;
    cout << num << endl;
    return 0;
}