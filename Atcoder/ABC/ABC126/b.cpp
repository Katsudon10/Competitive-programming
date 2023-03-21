#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int a,b;
    a=stoi(s.substr(0,2));
    b=stoi(s.substr(2,2));
    bool my=false,ym=false;
    if(a>=1 && a<=12)my=true;
    if(b>=1 && b<=12)ym=true;
    if(my&&ym){
        cout << "AMBIGUOUS" << endl;
    }else if(my){
        cout << "MMYY" << endl;
    }else if(ym){
        cout << "YYMM" << endl;
    }else{
        cout << "NA" << endl; 
    }
    return 0;
}