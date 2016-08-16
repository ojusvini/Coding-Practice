#include <stdio.h>

int main()
{
	int g,b,n,t;
	while(1){
		scanf("%d%d",&g,&b);
		if(g==-1&&b==-1)break;
		else if(g==0 && b == 0)
		n = 0;
		else if(g==b)
		n = 1;
		else if(g>b)
		n = (g+b)/(b+1);
		else
		n = (g+b)/(g+1);
		printf("%d\n",n);		
	}
	return 0;
}
