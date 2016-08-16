#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
long long int a[2001];

int main(){
	int t,i,j,x,ti;
	long long int c;
	scanf("%d",&t);
	ti = 1;
	while(t--){
		int n,m,temp;
		c = 0;
		scanf("%d%d",&x,&n);
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++){
			scanf("%d",&temp);
			if(temp<=x){
				c+=a[x-temp];
				a[temp]++;
			}
		}
		printf("%d. %lld\n",ti++,c);
	}
	return 0;
}
