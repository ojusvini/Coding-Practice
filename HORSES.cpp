#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int t,i,j;
	long long int mind,d;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
		}
		sort(a,a+n);
		mind = a[1]-a[0];
		for(i=2;i<n;i++){
				d = a[i] - a[i-1];
				if(d<mind) mind = d;
		}
		printf("%lld\n",mind);
	}
	return 0;
}
