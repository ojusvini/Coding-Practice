#include <stdio.h>

int main()
{
	int x, y, t;
	scanf("%d",&t);
	
	while(t--) {
		scanf("%d%d",&x,&y);
		if( x < y ||x - y > 2||x-y == 1)
		printf("No Number\n");
		else if(x%2)
		printf("%d\n",x+y - 1);
		else printf("%d\n",y+x);
	}
	return 0;
}
