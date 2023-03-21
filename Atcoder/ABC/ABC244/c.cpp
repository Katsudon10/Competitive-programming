#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    vector<bool>num(2001,true);
    int n;
    cin >> n;
    int j;
    num[0]=false;
    rep(i,2*n+1){
        for(int k=1;k<=2*n+1;k++){
            if(num[k]==true){
                cout << k << endl;
                num[k]=false;
                break;
            }
        }
        cin >> j;
        if(num[j]==false){
            return 0;
        }
        num[j]=false;
    }
    return 0;
}