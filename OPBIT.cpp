#include <stdio.h>
#include <math.h>

int main()
{
	int t,a,b,i,ab[1000],r,d,c;
	scanf("%d",&t);
	while(t--) {
		c=0;
		scanf("%d%d",&a,&b);
		a=sqrt(a);
		b=sqrt(b);
		if(a<b)
		{
			for(i=a;i<b;i++)
			{
				ab[c]=((i+1)*(i+1))-(i*i);
				c++;
			}
		}
		else
		{
			for(i=b;i<a;i++)
			{
				ab[c]=((i+1)*(i+1))-(i*i);
				c++;
			}
		}
		r=ab[0];
		d=ab[0];
		for(i=1;i<c;i++) {
			r=r^ab[i];
			d=d&ab[i];
		}
		d=d&r;
		printf("%d\n",d);
	}
	return 0;
}
