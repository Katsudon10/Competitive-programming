#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b,c,k;
    cin >> a >> b >> c >> k;
    int num=0;
    for(int i=0;i<k;i++){
        if(a!=0){
            num++;
            a--;
        }else if(b!=0){
            num+=0;
            b--;
        }else if(c!=0){
            num--;
            c--;
        }
    }
    cout << num << endl;
    return 0;
}