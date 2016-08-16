#include <stdio.h>

int main()
{
	int n,i,b,bi,t;
	scanf("%d",&t);
	while(t--) {
	scanf("%d",&n);
	int a[n][2];
	for(i = 0; i < n; i++)
	{
		scanf("%d%d",&a[i][0],&a[i][1]);
	}
	b = a[0][0];
	bi = 0;
	for(i = 1 ; i < n ; i ++)
	{
		if(a[i][0]>b)
	{
		b = a[i][0];
		bi = i;
	}
			
	}
	int f = 0;
	for(i = 0 ; i < n ; i ++)
	{
		if(i == bi)
		continue;
		else
		if( a[i][1] > b){
		f = 1;
		break;
		}		
	}
	if(f)
	printf("-1\n");
	else
	printf("%d",bi + 1);
}
return 0;	
}
