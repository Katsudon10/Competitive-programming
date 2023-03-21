#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string s;
    cin >> s;
    rep(i,s.size()-1){
        for(int j=i+1;j<s.size();j++){
            if(s.at(i)==s.at(j)){
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes" << endl;
    return 0;
}