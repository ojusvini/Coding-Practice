#include<stdio.h>

int main()
{
	int t,n,row;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n==1)
		{printf("poor conductor\n");
		continue;
		}
		else
		{ row = (n+3)/5;
		printf("%d ",row);
		switch(n%10)
		{
			case 1:
			case 2:printf("W L\n");
					break;
			case 0:
			case 3:printf("A L\n");
					break;
			case 4:
			case 9:printf("A R\n");
					break;
			case 5:
			case 8:printf("M R\n");
					break;
			case 6:
			case 7:printf("W R\n");
					break;
		}
		}
	}
	return 0;
}
