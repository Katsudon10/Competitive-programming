#include <bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin >> n;
   int n2 = 1<<n;
   vector<int> a(n2);
   for(int i=0;i<n2;i++){
       cin >> a[i];
   }

   map<int,int>mp;
   for(int i=0;i<n2;i++)mp[a[i]]=i+1;

   while(a.size()>2){
       vector<int>na;
       for(int i=0;i<a.size();i+=2){
           na.push_back(max(a[i],a[i+1]));
       }
       swap(a,na);
   }
   int ans=min(a[0],a[1]);
   cout << mp[ans] << endl;

}