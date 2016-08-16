#include <stdio.h>
#include<string.h>
//#include<conio.h>

//using namespace std;

int main()
{
char ch[1000];
char b[1000];
int len,i,t,k,pos1,pos2;

	

gets(ch);

len = strlen(ch);
for(i = 0;i<len;i++)
{	if(ch[i+1]>='a' && ch[i+1]<='z'&&ch[i]==' ')
				pos1 = i;
	if(ch[i]>='a' && ch[i]<='z'&&ch[i+1]==' ')
				pos2= i;
}
k = 0;
for(i = pos2+2; i < len;i++)
{
b[k]= ch[i];
k++;

}

b[k]=' ';
k++;

for(i = pos1+1;i < pos2+2;i++)
{	
	b[k]=ch[i];
	k++;
	
}

for(i = 0 ;i < pos1;i++)
{
	b[k]= ch[i];
	k++;
	
}
for(i = 0; i < len;i++)
{
	ch[i]=b[i];
}
ch[len]='\0';
printf("%s\n",ch);

return 0;
}
