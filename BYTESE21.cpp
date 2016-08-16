#include <stdio.h>
int t[210];
char s[210];
void quick(int arr[],char b[], int low, int up);
int partition(int arr[],char b[],int low, int up);
int main()
{
	int test,n,i,j,e,se;
	scanf("%d",&test);
	while(test--){
		int max = -9999;
		scanf("%d",&n);
		j = 0;
		for(i=0;i<n;i++){
			scanf("%d%d",&se,&e);
			t[j] = se;
			s[j] = 's';
			t[j+1] = e;
			s[j+1] = 'e';
			j = j+2; 
		}
		quick(t,s,0,j-1);
//		for(i=0;i<j;i++){
//			printf("%d\t",t[i]);
//		}
//		printf("\n");
		int c = 0;
		for(i=0;i<j ;i++){
			if(s[i]=='s') c++;
			else if(s[i]=='e') c--;
			if(c > max) max = c;
		}
		printf("%d\n",max);
	}
	return 0;
}

void quick(int a[],char b[], int low, int up)
{
	int pivloc;

	if(low >= up)
		return ;

	pivloc = partition(a,b, low, up);

	quick(a,b, low, pivloc-1);
	quick(a,b, pivloc+1, up);
}

int partition(int a[],char b[], int low, int up)
{
	int temp, i, j, pivot;
	char t;
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
			t = b[i];
			b[i] = b[j];
			b[j] = t;
			i++;j--;
		}
		else
			i++;
	}

	a[low] = a[j];
	a[j] = pivot;
	t = b[low];
	b[low] = b[j];
	b[j] = t;

	return j;

}
