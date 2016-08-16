#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
	long long int t,i,j,c;
	scanf("%lld",&t);
	while(t--){
		long long int n,re;
		scanf("%lld",&n);
		long long int a[n];
		int check[n],f;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			check[i] = 0;
		}
		sort(a,a+n);
		c = 0,re = n-1;
		for(i=n-1;i>=0;i--){
			if(check[i]!=1){
				f = 0;
				for(j=re;j>=0;j--){
					if(check[j]!=1){
						if(a[j]<a[i]/2){
							f = 1;
							re = j;
							break;
						}
						else if(a[j]==a[i]/2){
							check[j] = 1;
							c++;
							f = 1;re = j;break;
						}
					}
				}
				if(f==0) break;
			}	
		}
		printf("%lld\n",c);
	}
	return 0;
}
