#include <stdio.h>

void quick(int arr[],int b[], int low, int up);
int partition(int arr[],int b[],int low, int up);

int main()
{
	int n, i;

	printf("Enter the no of elements in the array: ");
	scanf("%d", &n);

	int x[n];
	int y[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d", &x[i]);
		scanf("%d",&y[i]);
	}

	quick(x,y, 0, n-1);

	printf("Sorted Array\n");

	for (i = 0; i < n; i++) {
		printf("a = %d\tb = %d\n", x[i],y[i]);
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
