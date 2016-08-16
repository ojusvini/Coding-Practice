#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[10005];
char b[10005];
int main(){
	int t,i,j;
	scanf("%d",&t);
	getchar();
	
	while(t--){
		//memset(a,'\0',sizeof(a));
		//memset(b,'\0',sizeof(b));
		gets(a);
		int l = strlen(a);
		j = 0;
		for(i=0;i<l;i++){
			if(!isdigit(a[i]))
			b[j++]=a[i];
		}
		b[l] = '\0';
		printf("%s\n",b);
	}
	return 0;
}
