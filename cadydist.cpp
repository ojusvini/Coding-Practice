#include<stdio.h>
void mergeSort(long long int arr[],long long int low,long long int mid,long long int high,long long int n);
void partition(long long int arr[],long long int low,long long int high,long long int n);
int main()
{
	long long int n,sum,i;
	scanf("%llu",&n);
	while(n!=0)
	{
		sum=0;
		long long int a[n],b[n];
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		scanf("%lld",&b[i]);
		partition(a,0,n-1,n);
		partition(b,0,n-1,n);
		for(i=0;i<n;i++)
		sum=sum+(a[i]*b[n-i-1]);
		printf("%lld\n",sum);
		scanf("%lld",&n);
	}
	return 0;
}

void partition(long long int arr[],long long int low,long long int high,long long int n){

   int mid;

    if(low<high){
         mid=(low+high)/2;
         partition(arr,low,mid,n);
         partition(arr,mid+1,high,n);
         mergeSort(arr,low,mid,high,n);
    }
}

void mergeSort(long long int arr[],long long int low,long long int mid,long long int high,long long int n){

    long long int i,m,k,l,temp[n];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}
