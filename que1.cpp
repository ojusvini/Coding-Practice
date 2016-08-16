#include <stdio.h>
#include <string.h>
int p[1005];
void quick(int arr[],int b[], int low, int up);
int partition(int arr[],int b[],int low, int up);
int main(){
	int t,i,j,c;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		memset(p,-1,n*sizeof(int));
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<n;i++) scanf("%d",&b[i]);
		quick(a,b, 0, n-1);
		for(i=0;i<n;i++){
			c = 0;
			for(j=0;j<n;j++){
				if(p[j] == -1) c++;
				if(c==b[i]+1) break;
			}
			p[j] = a[i];
		}
		for(i=0;i<n;i++){
			printf("%d ",p[i]);
		}
		printf("\n");
	}
	return 0;
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
