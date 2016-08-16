#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

#define MOD 1000000007
using namespace std;

int main() {
	long long int t,n,i,j,k,ans;
	long long int pow1,res;
	cin>>t;
	while(t--){
		ans = 0;
		cin>>n;
		long long int a[n];
		for(i = 0; i < n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		res = 0;
		pow1 = 1;
		for(i = 0; i < n; i++){
			res = (res + ((pow1*a[i])%MOD))%MOD;
			pow1 = (pow1*2)%MOD;	
		}
		ans = 0;
		pow1 = 1;
		for(i=n-1;i>=0;i--){
			ans = (ans + (pow1*a[i])%MOD)%MOD;
			pow1 = (pow1*2)%MOD;
		}
		printf("%lld\n",(res-ans)%MOD);
	}
	return 0;
}
/*			If input is 1,2,3,4
Ans is.  2^4 *4-2^1*4 16*4 - 8 + 8*3 - 4*3 + 4*2 - 8*2 + 2*1 - 16
+  2^3*3-2^2*3			
+  2^2*2 - 2^3*2

+  2^1*1 - 2^4*1*/
