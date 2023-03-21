#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    string str;
    cin >> str;
    if(str.at(0)!='A'){
        cout << "WA" << endl;
        return 0;
    }
    int num=0,pos;
    for(int i=2;i<str.size()-1;i++){
        if(str.at(i)=='C'){
            num++;
            pos=i;
        } 
    }
    if(num!=1){
        cout << "WA" << endl;
        return 0;
    }
    for(int i=1;i<str.size();i++){
        if(i!=pos && !islower(str.at(i))){
            cout << "WA" << endl;
            return 0;
        } 
    }
    cout << "AC" << endl;
    return 0;
}