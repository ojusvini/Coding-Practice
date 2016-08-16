#include <stdio.h>

//code uses modular expansion

long long int modexpo(long long int a,long long int b,long long int c)
{	long long int e = 1,n = 0;
	while(n<b)
	{
		e = (e * a)%c;
		n++; 
	}
	return e;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b;
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",modexpo(a,b,10));
    }
    return 0;
}

