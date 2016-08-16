#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char ch[1100];
	char lw;
	int l,i,f;
	while(1)
	{
		gets(ch);
		if(strcmp(ch,"*")==0)
		break;
		else if(ch[0]==0)
		continue;
		else
		{	f=0;
			l =strlen(ch);
			lw=ch[0];
			for(i=1;i<l;i++)
			{
				if(ch[i]==' ')
				{	
					if(ch[i+1]==lw||ch[i+1]==lw-32||ch[i+1]==lw+32){
						lw=ch[i+1];
						
					}
					else
					{
					f=1;
					break;}
				}
			}
			if(f==1) printf("N\n");
			else printf("Y\n");
		}
	}
}
