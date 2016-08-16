#include<stdio.h>

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
    int x[11],y[11],a,d,i;
	while(1) {
	scanf("%d%d",&a,&d);
	if(a==0){
		break;
	}
	for(i=0;i<a;i++)
    scanf("%d",&x[i]);
    for(i=0;i<d;i++)
    scanf("%d",&y[i]);
    quicksort(x,0,a-1);
    quicksort(y,0,d-1);
    
    if(x[0] < y[1])
    printf("Y\n");
    else
    printf("N\n");
	}
  
  return 0;
}
