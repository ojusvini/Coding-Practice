#include <stdio.h>
#include <math.h>

long long int mod_pow(long long int num, long long int pw)
{
    long long int test;
    for(test = 1; pw; pw >>= 1)
    {
        if (pw & 1)
        test = (test * num);
        num = (num * num);
    }

    return test;

}

int main()
{	int t;
scanf("%d",&t);
	double x,y,s,n,r,a,p,q,i;
	while(t--){
		scanf("%lf%lf%lf",&x,&y,&s);
		if(x==y){
			n=s/x;
			printf("%0.0lf\n",n);
			while(n--){
				printf("%0.0lf ",x);
			}
			printf("\n");
		}
		else {
			r=2;
			while(1){
				if((r*r*r*r*r*y-x)==(s*r*r*(r-1)))
				break;
				r++;
			}
			a=(x/(r*r));
			p=r*r*r*r*r;
			q=y/x;
			p=p*q;
			p=log(p);
			q=log(r);
			n=p/q;	
			
			long long int ra=(long long int)r;
			long long int na =(long long int)n;
			printf("%0.0lf\n",n);
			printf("%0.0lf ",a);
			for(i=1;i<na;i++)printf("%0.0lf ",a*mod_pow(r,i));
			printf("\n");
		}
	}
	return 0;
}
