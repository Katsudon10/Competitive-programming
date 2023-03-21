#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    vector<bool>pin(7);
    pin[0]=(s[6]=='1');
    pin[1]=(s[3]=='1');
    pin[2]=(s[1]=='1' || s[7]=='1');
    pin[3]=(s[0]=='1' || s[4]=='1');
    pin[4]=(s[2]=='1' || s[8]=='1');
    pin[5]=(s[5]=='1');
    pin[6]=(s[9]=='1');
    if(s[0]=='1'){
        cout << "No" << endl;
        return 0;
    }else{
        rep(i,7){
            rep(j,i){
                if(pin[i] && pin[j]){
                    for(int k=j+1;k<i;k++){
                        if(!pin[k]){
                            cout << "Yes" << endl;
                            return 0;
                        }
                    }
                    
                }
            }
        }
        cout << "No" << endl;
    }
    return 0;
}