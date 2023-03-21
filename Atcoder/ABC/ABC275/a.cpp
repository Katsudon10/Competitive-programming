#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;

int main(){
    int n;
    cin >> n;
    int num=0,pos=0,max_num=0;
    rep(i,n){
        cin >> num;
        if(num>max_num){
            swap(num,max_num);
            pos=i;
        }
    }
    cout << pos+1 << endl;
    return 0;
}