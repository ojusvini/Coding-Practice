#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char s[10001],w[10001];
char *l[10001];
int max = 10001;
int main(){
	int c,t,len,i,f,j,k;
	scanf("%d",&t);
	getchar();
	while(t--){
		c = 0;
		gets(s);
		len = strlen(s);
		printf("%s\n",s);
		j = 0;
		while(j<len){
			i = 0;
			while(s[j]!=' '&&j<len){
				w[i++] = s[j++];
			}
			w[i] = '\0';
			if(i>0){
				f = 0;
				for(k=0;k<c;k++){
					if(strcmp(w,l[k])==0){
						f = 1;
						break;
					}
				}
				if(f==0)
				{
				l[c]=(char *)malloc(sizeof(char)*(i+1));
				strcpy(l[c],w);
				c++;
				}		
			}
			j++;
		}
		printf("%d\n",c);					
	}
	return 0;
}
