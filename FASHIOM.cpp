#include <stdio.h>

void quicksort(int x[],int first,int last){
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
	
	int t,n,sum,i;
	
	scanf("%d",&t);
	
	while(t--) {
	
	scanf("%d",&n);
	sum=0;
	int m[n];
	int w[n];
	for(i = 0 ; i < n ; i++ )
	scanf("%d",&m[i]);
	quicksort(m,0,n-1);	
	
	for(i = 0 ; i < n ; i++ )
	scanf("%d",&w[i]);
	quicksort(w,0,n-1);

	
	for(i = 0 ; i < n ; i++ )
	sum = sum + (m[i]*w[i]);
	
	printf("%d\n",sum);
	}
	return 0;
}
