#include <stdio.h>

int main()
{
	long long int n,c,s,avg,i, t;
	scanf("%lld",&t);
	
	while(t--) {
	s = 0;
	scanf("%lld",&n);
	for(i = 0; i < n ; i++) {
		scanf("%lld",&c);
		s = s + c;
		
	}
	if(s%n) {
		printf("NO\n");
	}
	else 
	printf("YES\n");
	}
	return 0;
	
}
