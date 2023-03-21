#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int inf = INT_MAX;
using ll = long long;
//fixed << setprecision(5)

int main(){
	long long int num,num1,c,d;
	cin >> num;
	num1 = num;
	long long int a=1,aa=1;
	long int ss = 0;
	while (num1 != 0) {
		num1 /= 10;
		ss++;
	}
	if (ss % 2 == 1) {
		for (int i = 0; i < ss-1 ; i++) {
			a *= 10;
		}
		for (int i = 0; i < ss/2; i++) {
			aa *= 10;
		}
		cout << (a - 1) / aa << endl;
	}
	else {
		for (int i = 0; i < ss / 2; i++) {
			a *= 10;
		}
		c = num / a;
		d = num - c * a;
		if (c > d) {
			cout << (num) / a - 1 << endl;
		}
		else {
			cout << (num - 1) / a << endl;
		}
	}    
    return 0;
}