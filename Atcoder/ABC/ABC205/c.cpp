#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(c%2==0){
        if(abs(a)>abs(b)){
            cout << '>' << endl;
        }else if(abs(a)==abs(b)){
            cout << '=' << endl;
        }else{
            cout << '<' << endl;
        }
    }else{
        if(a>b){
            cout << '>' << endl;
        }else if(a==b){
            cout << '=' << endl;
        }else{
            cout << '<' << endl;
        }
    }
    
    return 0;
}