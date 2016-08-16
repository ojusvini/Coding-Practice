#include <stdio.h>

int heapsize = 0;
int length;
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
	for(i=1;i<=heapsize;i++){
		printf("%d\t",a[i]);
	}
}
int heap_max(int a[]){
	if(heapsize<1){
		printf("Empty Heap\n");
		return -1;
	} 
	return a[1];
}
int extract_max(int a[]){
	if(heapsize<1){
		printf("Empty Heap\n");
		return -1;
	} 
	int item = a[1];	
	a[1]=a[heapsize];
	heapsize--;
	maxheapify(a,1);
	return item;
}
int main(){
	int n;
	scanf("%d",&n);
	length = n;
	int a[n+1],i;
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	build_heap(a);
	display(a);	
}
