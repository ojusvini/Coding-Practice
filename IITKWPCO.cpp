#include <stdio.h>
#include <string.h>
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
{	int t,n,i,c,j;
	scanf("%d",&t);
	while(t--) {
	
	scanf("%d",&n);
	int a[n],f[n];
	memset(f,0,n*sizeof(int));
	for(i = 0 ; i < n ; i++) {
		scanf("%d",&a[i]);
	}
	quicksort(a,0,n-1);
	
		c = 0;
		for(i = 0;i < n ; i++)
		{	if(f[i])
			continue;
			else {
			
			for(j = 0; j < n ; j++)
			{
				if(i==j || f[j])
				continue;
				else
				if(a[i]==a[j]*2 || a[j]==a[i]*2)
				{
					f[i] = 1;
					f[j] = 1;
					c++;
					break;
				}
			}
			}
		}
		printf("%d\n",c);
	}
		return 0;
	
}
