#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    string str;
    cin >> str;
    for(int i=0;i<6/str.size();i++) cout << str;
    cout << endl;
    return 0;
}