#include <stdio.h>

int main(){
	int t,i,j;
	int a[55],voted[55],h[55];
	scanf("%d",&t);
	int k;
	for(k = 0;k<t;k++){
		int n;
		scanf("%d",&n);
		int s = 0,f = 0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			s = s + a[i];
			if(a[i]>=n||s>n) {
				f = 1;
				continue;
			}
		}
		if(s!=n) f = 1;
		if(f==1){
			printf("-1\n");
		}
		else {
			int c,temp;
		//	int h[n+1];
			for(i=0;i<=n;i++) {
				voted[i] = 0;
				h[i] = 0;
			}
			j = 1;
			for(int i=0;i<n;i++)
			{  voted[i]=0;
				j=i+1;
				if(j==n) j=0;
				while(j!=i && voted[i] == 0){
					if(a[j]!=0)
					{
						a[j]--;
						h[i]=j+1;
						voted[i]=1;
					}
					j=(j+1)%n;
				}
			}
			for(j=0;j<n;j++)
			printf("%d ",h[j]);
			printf("\n");
		}
	}	
	return 0;
}
