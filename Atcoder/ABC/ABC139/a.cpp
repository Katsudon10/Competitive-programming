#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    int ans=0;
    rep(i,3){
        if(str1.at(i)==str2.at(i)) ans++;
    }
    cout << ans << endl;
    return 0;
}