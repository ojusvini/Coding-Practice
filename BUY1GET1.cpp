#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	int c,t,i;
	char s[202];
	int a[53];
	scanf("%d",&t);
	while(t--){
		scanf("%s",s);
		c = 0;
		memset(a,0,sizeof(a));
		for(i=0;s[i]!='\0';i++){
			if(isupper(s[i])) a[26+s[i]-'A']++;
			else a[s[i]-'a']++;
		}
		for(i=0;i<53;i++){
			c += (a[i]/2 + a[i]%2);
		}
		printf("%d\n",c);
	}
}
