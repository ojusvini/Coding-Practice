#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	long long int t,i,j;
	scanf("%lld",&t);
	while(t--){
		long long int n;
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		j = 1;
		for(i=1;i<n;i++){
			if(a[i]!=a[i-1]) j++;
		}
		printf("%lld\n",j/2);
	}
	return 0;
}
