#include <stdio.h>
#include <math.h>
int main()
{
	int m,n,yr,type,i,amt,charge,a,b,bsum;
	scanf("%d",&m);
	double its;
	while(m--){
	scanf("%d%d%d",&amt,&yr,&n);
	bsum =0;
	while(n--){
		b=0;
		a=amt;
		scanf("%d%lf%d",&type,&its,&charge);
		if(type==0){
			for(i=0;i<yr;i++){
				b=b+a*its;
				a=a-charge;				
			}
			a=a+b;
			if(bsum<a)
			bsum =a;
		}
		else {
			for(i=0;i<yr;i++){
			b=a*its;
			a=a+b-charge;
			}
			if(bsum<a)
			bsum =a;		
		}
	}
	printf("%d\n",bsum);	
	}			
	return 0;
}
