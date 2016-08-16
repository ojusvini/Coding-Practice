#include <stdio.h>

int main()
{
	long long int l, i, ctr = 0;
	scanf("%lld", &l);
	char a[l+2];
	scanf("%s",a);
	
	for (i = 0; i < l; i++) {
		if (a[i]=='.')
			ctr++;
	}	
	printf("%lld\n", ctr);
	return 0;
}
