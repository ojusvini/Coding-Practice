#include <stdio.h>
#include <math.h>

int main()
{
	long long int y,p,k,c;
	scanf("%lld",&y);
	scanf("%lld",&p);
	if(p==0)
	printf("red\n");
	else {
		p=pow(2,y)-1-p;
		c=0;
		while(p){
			if(p%2)c++;
			p=p/2;
		}
		if(c%2)printf("blue\n");
		else printf("red\n");
	}
	return 0;
}

