#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    string str;
    cin >> str;
    bool flag_upper=false;
    bool flag_lower=false;
    bool flag_diff=false;
    rep(i,str.size()){
        if(isupper(str.at(i)))flag_upper=true;
        if(islower(str.at(i)))flag_lower=true;
    }
    set<char>c;
    
    for(char x:str){
        c.insert(x);
    }
    
    if(c.size()==str.size())flag_diff=true;
    
    if(flag_upper && flag_diff && flag_lower){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}