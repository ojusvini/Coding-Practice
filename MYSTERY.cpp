#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	char a[55];
	int l,c,i;
	scanf("%d",&t);
	getchar();
	while(t--){
		gets(a);
		l = strlen(a);
		c = 0;
		for(i = 0;i<l;i++){
			if(a[i]==' '||a[i]=='\t'){
				printf("%d",c);
				c = 0;
			}
			else c++;
		}
		printf("%d\n",c);
	}
}
