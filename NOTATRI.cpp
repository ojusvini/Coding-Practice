#include<stdio.h>
void quicksort(long long int x[],int first,int last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
}
int main()
{
	int n,i,c,j,k;

	
		scanf("%d",&n);
		while(n) {
			c = 0;
		long long int a[n];
		for(i = 0 ; i <n ; i++)
		scanf("%lld",&a[i]);
		
		quicksort(a,0,n-1);
		
		for(i = n-1; i > 1;i--)
		{			
			j = 0;
			k = i-1;
			if(a[j] + a[k] < a[i])
				{
					c += k-j;
					j++;
				}
			else k--;
		}
		printf("%d\n",c);
			scanf("%d",&n);
	}
	return 0;
}
