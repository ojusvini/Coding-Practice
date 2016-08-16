#include <stdio.h>

int abc(int a,int b){
	if(a==b) return 0;
	else {
		int c = 0;
		while(a!=b){
			if((a&(a-1))==0){
				if(a<b){
					a = a*2;
					c++;
				}
				else if(a>b){
					a = a/2;
					c++;
				}
			}
			else{
				if(a%2){
					a = (a-1)/2;
					c++;
				}
				else {
					a = a/2;
					c++;
				}
			}
		}
		return c;
	}
}

int main()
{
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d%d",&i,&j);
		n = abc(i,j);
		printf("%d\n",n);
		
	}
	return 0;
}
