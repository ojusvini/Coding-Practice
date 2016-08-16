#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

#define mod 1000000007
using namespace std;
long long int mpow(long long int b,long long int e)
{
	long long int result = 1;
	while (e>0) {
		if (e%2 == 1)
		result=(result*b)%mod;
		e= e/2;
		b = (b * b)%mod;
	}
	return result;
}

int main() {
	long long int t, n, i, j, k, ans, a[100000], pow1;
	cin>>t;
	while(t--){
		ans = 0;
		cin>>n;
		for(i = 0; i < n; i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(i = 0; i < n; i++){
			for(j = i + 1; j < n; j++){
				pow1 = mpow(2,j-i-1)%mod;
				ans = ans + ( ( ( a[j] - a[i] ) % mod ) * pow1 ) % mod;
			}
	}
	printf("%lld\n",ans%mod);
		printf("%lld\n", (long long int)(pow(2,2)));
	}
	return 0;
}
