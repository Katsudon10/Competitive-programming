#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    int v,a,b,c;
    cin >> v >> a >> b >> c;
    while(v>=0){
        if(v-a>=0){
            v-=a;
        }else{
            cout << "F" << endl;
            return 0;
        }
        if(v-b>=0){
            v-=b;
        }else{
            cout << "M" << endl;
            return 0;
        }
        if(v-c>=0){
            v-=c;
        }else{
            cout << "T" << endl;
            return 0;
        }

    }
    return 0;
}