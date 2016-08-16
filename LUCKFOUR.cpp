#include <stdio.h>
#include <string.h>

int main()
{
	char a[50];
	int t,i,c,l;
	scanf("%d",&t);
	while(t--){		
		scanf("%s",a);
		c = 0;
		l = strlen(a);
		for(i=0;i<l;i++){
			if(a[i]=='4')c++;
		}
		printf("%d\n",c);
	}
}
