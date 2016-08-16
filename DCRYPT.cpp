#include<stdio.h>
#include <ctype.h>
#include <string.h>

char ch[100001];
//char s[100001];
int main()
{
	int t,key,len,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&key);
		scanf("%s",ch);
		len = strlen(ch);
		if(key<26){
			for(i=0;i<len;i++){
				if(ch[i]=='.')ch[i]=' ';
				else if(islower(ch[i])){
					if(ch[i]+key<=122) 
						ch[i]=ch[i]+key;
					else
					ch[i]=((ch[i]+key)%122)+96;					
				}
				else if(isupper(ch[i])){
					if(ch[i]+key<=90)
					ch[i]=ch[i]+key;
					else
					ch[i]=((ch[i]+key)%90)+64;
				}
			}			
		}
		else{
			key=key%26;
			for(i=0;i<len;i++){
				if(ch[i]=='.')ch[i]=' ';
				else if(islower(ch[i])){
					ch[i]=toupper(ch[i]);
					if(ch[i]+key<=90)
					ch[i]=ch[i]+key;
					else
					ch[i]=((ch[i]+key)%90)+64;				
				}
				else if(isupper(ch[i])){
					ch[i]=tolower(ch[i]);
					if(ch[i]+key<=122) 
					ch[i]=ch[i]+key;
					else
					ch[i]=((ch[i]+key)%122)+96;
				}
			}
		}
		printf("%s\n",ch);
	}
	return 0;
}
