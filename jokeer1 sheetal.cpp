#include <stdio.h>
#include<algorithm>
using namespace std;
int main(void) {
	int t,i,n,a[66],x,c;
	long long int s;
	scanf("%d",&t);
	while(t--) {
		c=1;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sort(a,a+n);
		s=a[0];
		x=1;
		for(i=1;i<n;i++){
			if(a[i]-x==0){
				c=0;
				printf("0\n");
				break;
			}
			else{
				s*=(a[i]-x);
				x++;
				if(s>=1000000007){
					s=s%1000000007;
				}
			}
		}
		if(c==1){
			printf("%lld\n",s);
		}
	
		
	}
	printf("KILL BATMAN\n");
	return 0;
}
