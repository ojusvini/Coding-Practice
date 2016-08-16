#include <stdio.h>
struct node {
	long long int v;
	long long int c;
};
void quick(long long int a[],long long int low,long long int up)
{
	long long int pivloc;
	if(low >= up)
		return;
		
	long long int temp,i,j,pivot;
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
	pivloc = j;
	quick(a,low,pivloc-1);
	quick(a,pivloc+1,up);
}

void quick1(struct node a[],long long int low,long long int up)
{
	long long int pivloc;
	if(low >= up)
		return;
		
	long long int temp,i,j,pivot;
	i = low+1;
	j = up;
	pivot = a[low].c;
	while(i <= j)
	{
		while((a[i].c > pivot) &&(i < up))
			i++;
		while (a[j].c < pivot)
			j--;
		if(i < j)
		{
			temp = a[i].c;
			a[i].c = a[j].c;
			a[j].c = temp;
			temp = a[i].v;
			a[i].v = a[j].v;
			a[j].v = temp;
			i++;
			j--;
		}
		else
			i++;
	}
	a[low].c = a[j].c;
	a[j].c = pivot;
	temp = a[low].v;
	a[low].v = a[j].v;
	a[j].v = temp;
	pivloc = j;
	quick1(a,low,pivloc-1);
	quick1(a,pivloc+1,up);
}

int main(){
	long long int i, n;
	scanf("%lld%lld" , &n, &i);
	long long int a[n];
	for(i = 0; i < n; i++)
	{
		scanf("%lld" , &a[i]);
	}
	quick(a,0,n-1);
/*	for(i = 0; i < n; i++)
	{
		prlong long intf("%d ", a[i]);
	}
	prlong long intf("\n");*/
	struct node p[n];
	long long int c = 1;
	long long int k = 0;
	for(i = 1; i < n; i++)
	{
		if(a[i] == a[i-1]){
			c++;
		}
		else {
			p[k].v = a[i-1];
			p[k].c = c;
			c = 1;
			k++;
		}
	}
	p[k].v = a[n-1];
	p[k].c = c;
	k++;
/*	for(i=0;i<k;i++){
		prlong long intf("%d %d\n",p[i].v,p[i].c);
	}
	prlong long intf("\n");*/
	long long int j;
	quick1(p,0,k-1);
	for(i=0;i<k;i++){
		for(j = 0;j<p[i].c;j++){
			printf("%d ",p[i].v);	
		}
//		printf("%d %d\n",p[i].v,p[i].c);
	}
	printf("\n");
}
