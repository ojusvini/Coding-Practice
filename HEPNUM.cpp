#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

long long int value(char s[]) {
	long long int num = 0;
	int len = strlen(s);
	int val,i;
	for(i = 0 ; i < len ; i++)
	{
		if(isalpha(s[i]))
		val = s[i]%55;
		else
		val = s[i]%48;
		
		num = num + val*(long long int)pow(17,(len-i-1));
		
	}
	printf("%lld\n",num);
	return num;
}
int main()
{
	char a[100000],b[100000];
	long long int a1,b1;
	while(1) {
	
	scanf("%s%s",a,b);
	if(strcmp(a,"*")==0)
	return 0;
	else {
		a1 = value(a);
		b1 = value(b);
		if(a1==b1)
		printf("=\n");
		else if(a1 > b1)
			printf(">\n");
			else
				printf("<\n");	
	}
		
	}
	return 0;
}
