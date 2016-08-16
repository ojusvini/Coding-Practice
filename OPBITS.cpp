#include <stdio.h>
#include <math.h>

int main()
{
	int t,a,b,x,i,ab[1000],r,d,count;
	double c;
	scanf("%d",&t);
	while(t--) {
		r=0;
		d=0;
		count=0;
		scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++){ 
			c=sqrt(i);
			x=floor(c);
			if(c==x){ 
			//printf("%d\n",i); 
			ab[count]=i;
			count++; 
			}
		}
		for(i=0;i<count-1;i++){
			ab[i]=abs(ab[i+1]-ab[i]);
		}
		count--;
		for(i=0;i<count;i++)
		printf("%d ",ab[i]);
		printf("\n");
		r=ab[0];
		d =ab[0];
		for(i=1;i<count;i++) {
			r = r^ab[i];
			d = d^ab[i];
		}
			d=d&r;
		printf("%d\n",d);
	}
}
		 
