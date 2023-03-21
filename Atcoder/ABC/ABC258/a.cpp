#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int k;
    cin >> k;
    int hour=21+k/60;
    int minute=k%60;
    if(minute<10){
        cout << hour << ":0" << minute << endl; 
    }else{
        cout << hour << ':' << minute << endl;
    }
    return 0;
}