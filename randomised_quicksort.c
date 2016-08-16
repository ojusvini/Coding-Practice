#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void quick(int a[],int low,int up);
int partition(int a[],int low,int up);
int main()
{
	int i, n;
	printf("enter no. of elements to be sorted: \n");
	scanf("%d" , &n);
	int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d" , &a[i]);
	}
	quick(a,0,n-1);
	printf("sorted list is: ");
	for(i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
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
int partition(int a[],int low,int up)
{
	int temp,i,j,pivot, r, t;
	
	time_t tim;
	srand((unsigned)(&tim));
	r = (rand()%(up-low+1))+ low;
	t = a[r];
	a[r] = a[low];
	a[low] = t;//4178490
	
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

