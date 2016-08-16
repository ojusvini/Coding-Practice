#include <stdio.h>
#include <math.h>
#include <limits.h>

long long int a[100001];
long long int b[100001];

void quick(long long int arr[],long long int b[], long long int low, long long int up);
long long int partition(long long int arr[],long long int b[],long long int low, long long int up);

int main(){
	long long int t,i,j, maxp,minp;
	long long int max,ans;
	scanf("%lld",&t);
	while(t--){
		long long int n,diffmax,diffmin;
		scanf("%lld",&n);
		for(i=0;i<n;i++){
			scanf("%lld",&a[i]);
			b[i] = i+1;
		}
		quick(a,b, 0, n-1);
		maxp = minp = b[n-1];
		max = -9999999;
		for(i=n-1;i>=0;i--){
			diffmax = abs(maxp-b[i]);
			diffmin = abs(minp-b[i]);
			if(diffmax>diffmin) ans = a[i]*diffmax;
			else ans = a[i]*diffmin;
			if(maxp<b[i]) maxp = b[i];
			if(minp>b[i]) minp = b[i]; 
			if(ans>max) max = ans;
		}
		printf("%lld\n",max);
	}
	return 0;
}
void quick(long long int a[],long long int b[], long long int low, long long int up)
{
	long long int pivloc;

	if(low >= up)
		return ;

	pivloc = partition(a,b, low, up);

	quick(a,b, low, pivloc-1);
	quick(a,b, pivloc+1, up);
}

long long int partition(long long int a[],long long int b[], long long int low, long long int up)
{
	long long int temp, i, j, pivot;

	i = low+1;
	j = up;

	pivot = a[low];

	while (i <= j) {
		while ((a[i] < pivot) && (i < up))
			i++;
		while (a[j] > pivot)
			j--;

		if (i < j) {
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			temp = b[i];
			b[i] = b[j];
			b[j] = temp;
			i++;j--;
		}
		else
			i++;
	}

	a[low] = a[j];
	a[j] = pivot;
	temp = b[low];
	b[low] = b[j];
	b[j] = temp;

	return j;

}
