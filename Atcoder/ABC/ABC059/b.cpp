#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    string a,b;
    cin >> a >> b;
    if(a.size()>b.size()){
        cout << "GREATER" << endl;
    }else if(a.size()<b.size()){
        cout << "LESS" << endl;
    }else{
        if(a>b){
            cout << "GREATER" << endl;
        }else if(a<b){
            cout << "LESS" << endl;
        }else{
            cout << "EQUAL" << endl;
        }
    }
}