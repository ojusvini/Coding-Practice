#include <stdio.h>

void merge(long long int A[],long long int low,long long int mid,long long int high,long long int n)
{
 long long int i,l,m,k,temp[n];
 i=low;m=mid+1;l=low;
 while(l<=mid && m<=high)
 {
        if(A[l]<=A[m])
        {
         temp[i]=A[l];
         i++;l++;
        }
        else
        {
         temp[i]=A[m];
         m++;i++;
        }
 }
 if(l>mid)
 {
        for(k=m;k<=high;k++){
         temp[i]=A[k];
         i++;
        }
 }
 else
 {
        for(k=l;k<=mid;k++)
        {
         temp[i]=A[k];
         i++;
        }
 }
 for(k=low;k<=high;k++)
        A[k]=temp[k];
}
void partition(long long int A[],long long int LB,long long int UB,long long int N)
{
 long long int mid;
 if(LB<UB)
 {
        mid=(UB+LB)/2;
        partition(A,LB,mid,N);
        partition(A,mid+1,UB,N);
        merge(A,LB,mid,UB,N);
 }
}

int main()
{	int t;
	long long int s,n,i,d;
	char name[10000];
	scanf("%d",&t);
	while(t--){
		s =0;
		scanf("%lld",&n);
		long long int a[n];
		for(i=0;i<n;i++){
			scanf("%s%lld",name,&a[i]);
		}
		partition(a,0,n-1,n);
		for(i=0;i<n;i++){
			d=((i+1)-a[i]);
			if(d<0)
				s=s+(-1*d);
			else s=s+d;
		}
		
		printf("%lld\n",s);		
	}
	return 0;
}
