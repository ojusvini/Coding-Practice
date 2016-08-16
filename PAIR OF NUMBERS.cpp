#include <stdio.h>
int partition(int a[],int low,int up)
{
	int temp,i,j,pivot;
	i = low+1;
	j = up;
	pivot = a[low];
	while(i <= j)
	{
		while((a[i] < pivot) &&(i < up))
			i++;
		while (a[j] > pivot)
			j--;
		if(i < j)
		{
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
		else
			i++;
	}
	a[low] = a[j];
	a[j] = pivot;
	return j;
}
void quick(int a[],int low,int up)
{
	int pivloc;
	if(low >= up)
		return;
	pivloc = partition(a,low,up);
	quick(a,low,pivloc-1);
	quick(a,pivloc+1,up);
}

int main()
{
	int n,sum;
	scanf("%d",&n);
	int a[n];
	int i,j;
	int f = 0;
	for(i = 0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&sum);
	quick(a,0,n-1);
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]+a[j]==sum){
				f++;
			}	
		}
	}
	if(f==0){
		printf("NO\n");
	}
	else {
		printf("YES\n");
	}
	return 0;
}
