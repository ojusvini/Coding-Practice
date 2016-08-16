#include <iostream>
#include <stdio.h>
using namespace std;

bool isPartitionSum(int k,int n,int a[]){
	bool part[k+1][n+1];
	int i,j;
	for(i=0;i<=n;i++) part[0][i] = true;
	for(i=1;i<=k;i++) part[i][0] = false;
	for(i=1;i<=k;i++){
		for(j=1;j<=n;j++){
			part[i][j] = part[i][j-1];
			if(i>=a[j-1]){
				part[i][j] = part[i][j]|part[i-a[j-1]][j-1];
			}
		}
	}
	return part[k][n];
}
int main(){
	int t,i,j,k;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d%d",&n,&k);
		int a[n];
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		if(isPartitionSum(k,n,a)) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
