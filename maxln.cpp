#include <stdio.h>

int main()
{
	int t,i;
	long long r;
    float ac=.5;
    double s;
    scanf("%d",&t);
    i = 0;
	while(i<t)
    {
            ac=0.5;
            
        	scanf("%lld",&r);
            s = double(4*r*r)+.25;
            printf("Case %d: %.2f\n",++i,s);
    }
    return 0;
}

