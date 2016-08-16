#include <stdio.h>
#include <string.h>
int main(){
	int t;
	long long int n,k,c1,c0,c,i,cr;
	scanf("%d",&t);
	while(t--){
		c1 = 0;
		c0 = 0;
		c = 0;
		cr = 0;
		scanf("%lld%lld",&n,&k);
		char a[n+1];
		char b[n+1];
		scanf("%s",a);
		strcpy(b,a);
//		printf("%s\n",b);
		if(a[0]=='0') c0++;
		else c1++;
		
		for(i=1;i<n;i++){
			if(a[i]== '0'&&a[i-1]=='0'){
				c0++;
				c1 = 0;	
			}
			else if(a[i] == '1' && a[i-1] == '1'){
				c1++;
				c0 = 0;		
			}
			else {
				if(a[i] == '0')	{
					c0 = 1;
					c1 = 0;
				}
				else if(a[i] == '1'){
					c1 = 1;
					c0 = 0;
				}
			}
			if(c1 == k + 1){
				c++;
				a[i] = '0';
				c0 = 1;
				c1 = 0;	
			}
			else if(c0 == k + 1){
				c++;
				a[i] = '1';
				c0 = 0;
				c1 = 1;	
			}		
		}
		c0 = 0;
		c1 = 0;
		if(b[n-1]=='0') c0++;
		else c1++;
		for(i=n-2;i>=0;i--){
			if(b[i]== '0'&&b[i+1]=='0'){
				c0++;
				c1 = 0;	
			}
			else if(b[i] =='1' && b[i+1] == '1'){
				c1++;
				c0 = 0;		
			}
			else {
				if(b[i] == '0')	{
					c0 = 1;
					c1 = 0;
				}
				else if(b[i] == '1'){
					c1 = 1;
					c0 = 0;
				}
			}
			if(c1 == k + 1){
				cr++;
				b[i] = '0';
				c0 = 1;
				c1 = 0;	
			}
			else if(c0 == k + 1){
				cr++;
				b[i] = '1';
				c0 = 0;
				c1 = 1;	
			}
		}
		if(cr<c){
			printf("%lld\n",cr);
			printf("%s\n",b);	
		}
		else {
			printf("%lld\n",c);
			printf("%s\n",a);	
		}
	}
	return 0;
}
