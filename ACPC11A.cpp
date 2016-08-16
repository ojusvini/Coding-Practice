#include <stdio.h>
#include<string.h>

int main()
{
char ch[1000];
char b[1000];
int len,i,t,k,n,pos1,pos2;
scanf("%d",&t);
while(t)
{
	scanf("%d\n",&n);
	gets(ch);
	pos1 = -1;
	pos2 = -1;
	len = strlen(ch);
for(i = 0;i<len;i++)
{	if(ch[i+1]>='a' && ch[i+1]<='z'&&(ch[i]==' '||i == 0))
				pos1 = i;
	if(ch[i]>='a' && ch[i]<='z'&&(ch[i+1]==' '||ch[i+1]=='\0'))
				pos2= i;
}
if(pos1 == -1)
{	

}
else if(pos2 == len-1){
		k = 0;
		for(i = pos1+1;i < pos2+1;i++)
		{	
			b[k]=ch[i];
			k++;
		}
		b[k]=' ';
		k++;
		for(i = 0 ;i < pos1;i++)
		{
			b[k]= ch[i];
			k++;
	
		}
	for(i = 0; i < len;i++)
{
	ch[i]=b[i];
}
}
else
{
	k = 0;
	for(i = pos2+2; i < len;i++){
	b[k]= ch[i];
	k++;
	}

	b[k]=' ';
	k++;

	for(i = pos1+1;i < pos2+2;i++){	
	b[k]=ch[i];
	k++;
	}

	for(i = 0 ;i < pos1;i++) {
	b[k]= ch[i];
	k++;
	}
for(i = 0; i < len;i++)
{
	ch[i]=b[i];
}
ch[len]='\0';
}
printf("%s\n",ch);
t--;
}
return 0;
}
