#include <stdio.h>

int main(void)
{
	int t,a,b,i;
	scanf("%d",&t);
	i=1;
	while(t--){
		scanf("%d%d",&a,&b);
		printf("Case %d: %d\n",i,a+b);
		i++;
	}
	return 0;
}
