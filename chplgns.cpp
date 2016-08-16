#include <stdio.h>
int xi[100005];
int index[100005];
int ans[100005];
int partition(int a[],int b[], int low, int up)
{
	int temp, i, j, pivot;

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
void quick(int a[],int b[], int low, int up)
{
	int pivloc;

	if(low >= up)
		return ;

	pivloc = partition(a,b, low, up);

	quick(a,b, low, pivloc-1);
	quick(a,b, pivloc+1, up);
}


int main(){
	long long int t,n,m,p,x,y,i,j,k;
	scanf("%lld",&t);
	while(t--){
		k = 0;
		scanf("%lld",&n);
		m = -99999999999;
		for(i=0;i<n;i++){
			scanf("%lld",&p);
			for(j=0;j<p;j++){
				scanf("%lld%lld",&x,&y);
				if(m<x){
					m = x;
				}	
			}
			xi[i] = m;
			index[i] = i;	
		}
		quick(xi,index,0,n-1);
		for(i=0;i<n;i++){
			printf("%lld %lld\n",xi[i],index[i]);
		}
		for(i=0;i<n;i++){
			ans[index[i]] = i;
		}
		for(i=0;i<n;i++){
			printf("%lld ",ans[i]);
		}
		printf("\n");
	}
}
