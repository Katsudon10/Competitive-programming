#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    string o,e;
    cin >> o >> e;
    if(o.size()==e.size()){
        rep(i,o.size()){
            cout << o.at(i) << e.at(i);
        }
    }else{
        rep(i,o.size()-1){
            cout << o.at(i) << e.at(i);
        }
        cout << o.at(o.size()-1);
    }
    
    cout << endl;
    return 0;
}