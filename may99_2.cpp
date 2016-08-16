#include<stdio.h>
#include <math.h>

int main()
{
	long long int n,t;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		long long int i,l;
		long long int c = 0,s=0;
		i = 1;
		while(s<n){
			i = i*5;
			s = s+i;
			c++;
		}
		s = s-i;
		n = n-s;
		int a[32] = {0};
		int b = n-1;
		l = 0;
		while(l<c){
			a[l] = b%5;
			b = b/5;
			l++;
		}	
		for(i = c-1;i>=0;i--){
			switch(a[i]){
				case 0 :printf("m");
				break;
				case 1 :printf("a");
				break;
				case 2 :printf("n");
				break;
				case 3 :printf("k");
				break;
				case 4 :printf("u");
				break;
			}
		}
		printf("\n");		
	}
	return 0;
}


