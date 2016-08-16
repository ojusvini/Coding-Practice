#include <stdio.h>

int gcd(int a,int b)
{	int ti;

    while(b)
    {
        ti=a%b;
        a=b;
        b=ti;
    }
	return a;
}

int main()
{
	int t,a,b,c,g,i;
	scanf("%d",&t);
	i=1;
	while(t--){
		scanf("%d%d%d",&a,&b,&c);
		if(a>b) g=gcd(a,b);
		else g=gcd(b,a);
		if(c%g==0)
		printf("Case %d: Yes\n",i);
		else
		printf("Case %d: No\n",i);
		i++;
	}
	return 0;
}
