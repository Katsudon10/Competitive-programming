#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    string str1,str2;
    cin >> str1 >> str2;
    if(str1==str2.substr(0,str2.size()-1)){
        cout <<"Yes" << endl;
    }else{
        cout <<"No" <<endl;
    }
    return 0;
}