#include<stdio.h>
#include<string.h>
char a[102];
int main()
{
	long long int l, j, i, s;
	scanf("%s", a);
	l=strlen(a);
	j=100;
	s=0;
	for (i=0;i<l;i++) {
		if (a[i] == 'H')	s  = s + j;
		else if (a[i] == 'T')	s  = s - j;
		j = j+100;
	}
	printf("%lld\n", s);	
	return 0;
}
