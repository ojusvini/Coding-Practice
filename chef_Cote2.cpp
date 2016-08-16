#include<stdio.h>
	 
int main()
{
	int t,i,j;
	 
	scanf("%d",&t);
	 
	while(t--){
		
	 
	int n,flag;
	scanf("%d",&n);
	 
	int arr[n],brr[n];
	int sum=0;
	 
	 
	 
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	sum+=arr[i];
	 
	if(arr[i]==n)
	flag=0;
	}	 
	if(sum!=n)
	flag=0;	 
	else
	{
		flag=1;
	 
		for(i=0;i<n;i++)	{
			j=(i+1);
			while(arr[i]>0) {
				brr[j-1]=(j+1)%n;
				j++;
			}
		}	 
	}	 
	if(flag==0)
	printf("-1\n");
	 
	else
	{
		for(i=0;i<n;i++)
		printf("%d",brr[i]);
		printf("\n");
	}
	}
}
