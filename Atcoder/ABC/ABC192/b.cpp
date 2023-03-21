#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
    string str;
    cin >> str;
    int a=0;
    int b=0;
    int c=str.size();
    for(int i=0;i<c;i++){
        if(i%2==1 && isupper(str.at(i))){
            a++;
        }else if(i%2==0 && islower(str.at(i))){
            b++;
        }
    }
    if(a+b==c){
        cout << "Yes" << endl;
    }else{
         cout << "No" << endl;
    }
    return 0;
}