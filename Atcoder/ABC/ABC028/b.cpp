    #include <bits/stdc++.h>
    using namespace std;
    #define rep(i,n) for(int i=0;i<n;++i)
    const int inf = INT_MAX;
     
    int main(){
        string str;
        cin >> str;
        vector<int>num(6);
        rep(i,str.size()){
            if(str.at(i)=='A') num[0]++;
            else if(str.at(i)=='B') num[1]++;
            else if(str.at(i)=='C') num[2]++;
            else if(str.at(i)=='D') num[3]++;
            else if(str.at(i)=='E') num[4]++;
            else if(str.at(i)=='F') num[5]++;
        }
        rep(i,6){
            if(i==5){
                cout << num[i] << endl;
            }else{
                cout << num[i] << ' ';
            }
        } 
        return 0;
    }