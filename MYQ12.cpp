#include<stdio.h>

int main()
{
	int t,n,row,x;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==1)
		{printf("poor conductor\n");
		}
		else
		{ row = (n+3)/5;
		printf("%d ",row);
		if(row%2)
			x=(n-2)%5;
		else
			x = 4-((n-2)%5);
			
		switch(x)
			{
				case 0:printf("W L\n");
					break;
				case 1:printf("A L\n");
					break;
				case 2:printf("A R\n");
					break;
				case 3: printf("M R\n");
					break;
				case 4:printf("W R\n");
					break;
			}
		}
	}
	return 0;
}
		
