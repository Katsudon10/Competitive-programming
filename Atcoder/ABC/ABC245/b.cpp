#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    vector<bool>num(n);
    rep(i,n){
        int tmp;
        cin >> tmp;
        num[tmp]=true;
    }
    for(int i=0;i<2001;i++){
        if(num[i]!=true) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}