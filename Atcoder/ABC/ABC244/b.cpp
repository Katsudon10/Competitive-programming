#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    string str;
    cin >> n >> str;
    int x=0,y=0;
    string dir="east";
    rep(i,n){
        if(str.at(i)=='S' && dir=="east"){
            x++;
        }else if(str.at(i)=='S' && dir=="south"){
            y--;
        }else if(str.at(i)=='S' && dir=="west"){
            x--;
        }else if(str.at(i)=='S' && dir=="north"){
            y++;
        }else if(str.at(i)=='R' && dir=="east"){
            dir="south";
        }else if(str.at(i)=='R' && dir=="south"){
            dir="west";
        }else if(str.at(i)=='R' && dir=="west"){
            dir="north";
        }else if(str.at(i)=='R' && dir=="north"){
            dir="east";
        }
    }
    cout << x << " " << y << endl;
    return 0;
}