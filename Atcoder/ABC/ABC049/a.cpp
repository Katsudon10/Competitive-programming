#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;

int main(){
    char c;
    cin >> c;
    if(c=='a' || c=='i' || c=='u' || c=='e' || c=='o'){
        cout << "vowel" << endl;
    }else{
        cout << "consonant" << endl;
    }
    return 0;
}