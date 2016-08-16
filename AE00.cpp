#include <stdio.h>
#include <math.h>

int main()
{
	int n, s ,e,i,c;
	scanf("%d",&n);
	s = sqrt(n);
	e = s+1;
	c = 0;
	for ( i = 1; i < e ; i++) {
		c+=((n/i) - (s-i));
	}
	printf("%d",c);
	
	return 0;
	
	
}
