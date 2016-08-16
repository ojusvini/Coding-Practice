#include <stdio.h>
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
		while(1){
			if(i<=0||i>n-2){
				printf("NO EQUILLIBRIUM\n");
				break;
				
			}
			if(s==sn){
			printf("%lld\n",a[i]);
			f= 1;
			break;
			}
			
		else if(s<sn){
			s=s+a[i];
			sn=sn-a[i+1];
			i++;						
			}
		else if(s>sn){
			s=s-a[i-1];
			sn = sn +a[i];
			i--;
			}
		}
			
	}
return 0;
}
