#include <stdio.h>
int binsearch(int a[], int n, int item) {
	int low, up, mid;
	low = 0;
	up = n-1;
	while (low <= up) {
		mid = (low+up)/2;
		if (item < a[mid])
			up = mid-1;
		else if (item > a[mid]) 
			low = mid+1;
		else
			return mid;
	}
	return -1;
}
int max(int a,int b){
	return b>a?b:a;
}
int lookup(int h1[],int h2[],int a[],int k,int i){
	if(k==1){
		if(a[i]<0){
			if(h1[10000-a[i]]==1) return 1;
		}
		else if(h1[a[i]]==1) return 1;
	}
	else {
		if(k==2){
			if(a[i]<0){
				if(h2[10000-a[i]]==1) return 1;
			}
			else if(h2[a[i]]==1) return 1;
		}	
	}
	return 0;
}

int main(){
	int n1;
	int n2,i;
	while(1){
		int h1[20003] = {0};
		int h2[20003] = {0};
		scanf("%d",&n1);
		if(n1==0) break;
		int a[n1+1];
		for(i=0;i<n1;i++){
			scanf("%d",&a[i]);
			if(a[i]<0){
				h1[10000-a[i]] = 1;
			}
			else {
				h1[a[i]] = 1;
			}
		}
		scanf("%d",&n2);
		int b[n2+1],j;
		for(i=0;i<n2;i++){
			scanf("%d",&b[i]);
			if(b[i]<0){
				h2[10000-b[i]] = 1;
			}
			else {
				h2[b[i]] = 1;
			}
		}
		int dp1[n1+1];
		int dp2[n2+1];
		for(i=0;i<=n1;i++ ){
			dp1[i] = 0;
		}
		for(i=0;i<=n2;i++ ){
			dp2[i] = 0;
		}
/*		for(i=0;i<n1;i++){
			printf("%d %d\n",a[i],lookup(h1,h2,a,2,i));
		}
		for(i=0;i<n2;i++){
			printf("%d %d\n",b[i],lookup(h1,h2,b,1,i));
		} */
		i = 0;
		j = 0;
		int p1,p2;
		while(i<n1 || j<n2){
		//	printf("Looking from i = %d j = %d\n",i,j);
			while(i<n1&&lookup(h1,h2,a,2,i)!=1){
				dp1[i+1] = dp1[i] + a[i];
				i++; 
			}
			while(j<n2&&lookup(h1,h2,b,1,j)!=1){
				dp2[j+1] = dp2[j] + b[j];
				j++; 
			}
		//	printf("Ending at i = %d j = %d\n",i,j);
			if(i<n1&&j<n2&&lookup(h1,h2,a,2,i)==1&&lookup(h1,h2,b,1,j)==1 && a[i]== b[j]){
		//		printf("Match found i = %d j = %d,dp1[i] = %d dp2 [j] = %d\n",i,j,dp1[i],dp2[j]);
				p1 = max(dp1[i],dp2[j]);
				dp1[i+1] = p1 + a[i];
				dp2[j+1] = p1 + b[j];
				i++;
				j++;
			//	p2 = max(dp1[i],dp2[j]);
		//		printf("now value = %d %d\n",dp1[i],dp2[j]);
			}
		//	printf("Next iteration i = %d j = %d\n",i,j);
		}
		p2 = max(dp1[i],dp2[j]);
		printf("%d\n",p2);
	}
	return 0;
}
