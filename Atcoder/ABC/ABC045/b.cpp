#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
    string A,B,C;
    cin >> A >> B >> C;
    int ai=0,bi=0,ci=0;
    while(ai<=A.size() || bi<=B.size() || ci<=C.size()){
        char turn ='a';
        if(turn=='a'){
            turn=A[ai];
            ai++;
        }else if(turn=='b'){
            turn=B[bi];
            bi++;
        }else if(turn=='c'){
            turn=C[ci];
            ci++;
        }
    }
    if(ai==A.size()+1){
        cout << 'A' << endl;
    }else if(bi==B.size()+1){
        cout << 'B' << endl;
    }else if(ci==C.size()+1){
        cout << 'C' << endl;
    }


    return 0;
}