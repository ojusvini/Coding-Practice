#include <stdio.h>
int t[10000001];
int main()
{
	int test,n,i,j,s,e;
	scanf("%d",&test);
	while(test--){
		for(i=0;i<10000001;i++) t[i] = 0;
		int max = -9999;
		int min = 9999999;
		scanf("%d",&n);
	//	printf("%d\n",n);
		for(i=0;i<n;i++){
	//		printf("i = %d\n",i);
			scanf("%d%d",&s,&e);
			for(j=s;j<=e;j++){
				t[j]++;
			}
			if(s<e){
				if(s<min) min = s;
				if(e>max) max = e;	
			}
			else {
				if(e<min) min = e;
				if(s>max) max = s;
			}
		//	printf("min = %d max = %d\n",min,max);
		}
		int c = 0;
		for(i=min;i<=max;i++){
			if(t[i]>c) c= t[i];
		}
		printf("%d\n",c);
	}
}
