#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    
    bool flag=true;
    for(int i=1;i<=6;i++){
        if('0'>s[i] || s[i]>'9'){
            flag=false;
        }
    }
    int num;
    if(flag)num=stoi(s.substr(1,6));
    for(int i=7;i<s.size()-1;i++){
        if(isupper(s[i]) || '0'>s[i] || s[i]>'9') flag=false;
    }
    if(isupper(s[0]) && 100000<=num && num<=999999 && flag && isupper(s[s.size()-1])){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}