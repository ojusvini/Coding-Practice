#include <stdio.h>
#include <math.h>
int a [100009];
int main()
{
	long long int t,n,i,j,sum,s,sn,f;
	scanf("%lld",&t);
	while(t--){
		sum =0;
		sn =0;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			sum +=a[i];
		}
		i=n/2;
		s=0;
		for(j=0;j<i;j++){
			s=s+a[j];
		}
		sn=sum - a[i] -s;	
		
		f=0;
		while(i>0&&i<n-1){
			if(s==sn){
			printf("%lld\n",a[i]);
			f= 1;
			break;
			}
			
		else if(s<sn){
			s=s+a[i];
			sn=sn-a[i+1];
			if(abs(sn - s )==a[i] ){
				f=0;
				break;
			}
			i++;						
			}
		else if(s>sn){
			s=s-a[i-1];
			sn = sn +a[i];
			if(abs(sn - s )==a[i] ){
				f=0;
				break;
			}
			i--;
			}
		}
		if(f==0) printf("NO EQUILLIBRIUM\n");	
	}
return 0;
}
