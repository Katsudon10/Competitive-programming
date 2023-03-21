#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int x;
    cin >> x;
    if(x<40){
        cout << 40-x << endl;
    }else if(x<70){
        cout << 70-x << endl;
    }else if(x<90){
        cout << 90-x << endl;
    }else if(x>=90){
        cout << "expert" << endl;
    }
    return 0;
}