#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>c){
        swap(a,c);
    }
    if(b-a>=0 && c-b>=0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}