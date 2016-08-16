#include<stdio.h>
void display(int a[],int n) {
	int i;
	for(i=0;i<n;i++) printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int a[100];
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&a[i]);
	for(i=1;i<n;i++){
		k = a[i];
		j = i-1;
		while(j>=0&&a[j]>k){
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=k;
		display(a,n);
	}
	display(a,n);
}
