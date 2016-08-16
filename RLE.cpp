#include <stdio.h>
#include <string.h>
int main()
{
	char ch[100010],a;
	int l,i,c,j;
	while(scanf("%s",ch)!=EOF){
		
		l=strlen(ch);
		if(l==3)printf("%s\n",ch);
		else { 
		a=ch[0];
		c=1;
		for(i=1;i<=l;i++){
			if(ch[i]==a)
			c++;
			else{
			if(c>3){
			printf("%d!%c",c,a);
			}
			else {
			for(j=0;j<c;j++)
			printf("%c",a);
			}
			c=1;
			a=ch[i];				
			}			
		}
		printf("\n");
		}
	}
	return 0;
}
