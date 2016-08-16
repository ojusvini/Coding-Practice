#include <stdio.h>

long long int produce(long long int t,long long int n,long long int arr[]){
	long long int total=0,i;
	for(i=0;i<n;i++)
	total = total+ (t/arr[i]);
	return total;	
}

long long int binarysearch(long long int arr[],long long int n,long long int t,long long int ma)
{
	long long int low = 1, high = ma,mid,tmp;
	while(low<high){
		mid = (low + high)/2;
		tmp = produce(mid,n,arr);
		if(tmp < t) low = mid + 1;
		else if(tmp>=t)
		high = mid;
	}
	return high;
}

int main()
{
	int t;
	scanf("%d",&t);
	long long int n,k,i,max;
	while(t--){
		scanf("%lld%lld",&n,&k);
		long long int a[n];
		max=-1;
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			if(a[i]>max) max=a[i];
		}
		max=max*k;
		printf("%lld\n",binarysearch(a,n,k,max));
	}
	return 0;
}
