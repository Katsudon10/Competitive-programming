#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    int n;
    cin >> n;
    vector<bool>mass(4);
    int p=0;
    rep(i,n){
        int a;
        cin >> a;
        mass[0]=true;
        for(int j=3;j>=0;j--){
            if(mass[j]){
                mass[j]=false;
                if(j+a>3){
                    p++;
                }else{
                    mass[j+a]=true;
                }
            }
        }
    }
    cout << p << endl;
    return 0;
}