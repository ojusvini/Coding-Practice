#include <stdio.h>
#include <time.h>

int A[2000000];
int B[2000000];
int heapsize = 0;
int length;
int n;

int parent(int i){
	return i/2;
}
int left(int i){
	return (2*i);
}
int right(int i){
	return (2*i) + 1;
}
void maxheapify(int a[],int i)
{
	int l,r,largest,t;
	l=left(i);
	r = right(i);
	if(l<=heapsize&&a[l]>a[i])
		largest = l;
	else largest = i;
	if(r<=heapsize&&a[r]>a[largest])
		largest = r;
	if(largest!=i){
		t = a[i];
		a[i]=a[largest];
		a[largest] = t;
		maxheapify(a,largest);
	}
}
void build_heap(int a[]){
	heapsize = length;
	int i;
	for(i=length/2;i>0;i--){
		maxheapify(a,i);
	}
}
void display(int a[]){
	int i;
	for(i=1;i<=n;i++){
		printf("%d\t",a[i]);
	}
}
void heapsort(int a[],int low,int high){
	int t,i;
	int b[9000];
	int j = 0;
	for(i=low;i<=high;i++){
		b[++j]=a[i];	
	}
	length = j;
	build_heap(b);

	for(i=length;i>=1;i--){
		t=b[1];
		b[1]=b[i];
		b[i]=t;
		heapsize--;
		maxheapify(b,1);
	}
	for(i=1;i<=length;i++){
		a[low+i-1]=b[i];	
	}
}
int read_input()
{
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&A[i]);
	}
	return n;
}
int partition(int a[], int low, int up)
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
			i++;j--;
		}
		else
			i++;
	}
	a[low] = a[j];
	a[j] = pivot;

	return j;
}

void quick(int a[], int low, int up,int key)
{
	int pivloc;

	if(low > up)
		return ;

	pivloc = partition(a, low, up);

	if ((pivloc - low) > key)
		quick(a, low, pivloc-1, key);
	else
	{
		heapsort(a,low,pivloc-1);
	}
	if ((up - pivloc) > key)
		quick(a, pivloc+1, up, key);
	else
		heapsort(a, pivloc+1, up);
}

void hybrid_sort(int a[],int n,int k){
	quick(a,1,n,k);
}

int main()
{
	int i,k;
	n = read_input();
	int j;
	hybrid_sort(A,n,1);
		for(k=1;k<=n;k++){
			printf("%d\n",A[k]);
		}
	return 0;
}

