#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
#define ALL(a)  (a).begin(),(a).end()
const int inf = INT_MAX;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

vector<int>dxs={1,0,-1,0};
vector<int>dys={0,1,0,-1};

//fixed << setprecision(10)

int main(){
    string s;
    cin >> s;
    int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0',d=s[3]-'0';
    if(a+b+c+d==7){
        cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;
        return 0;
    }else if(a+b+c-d==7){
        cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;
        return 0;
    }else if(a+b-c+d==7){
        cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;
        return 0;
    }else if(a-b+c+d==7){
        cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;
        return 0;
    }else if(a+b-c-d==7){
        cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;
        return 0;
    }else if(a-b+c-d==7){
        cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;
        return 0;
    }else if(a-b-c+d==7){
        cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;
        return 0;
    }else if(a-b-c-d==7){
        cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;
        return 0;
    }
    return 0;
}