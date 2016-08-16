#include <stdio.h>
 void quicksort(int x[10],int first,int last){
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
 int a[50],n,lim,p,i,pos,t = 0;
 printf("Enter Disk head pointer position:");
 scanf("%d",&p);
 printf("\nEnter number of requests:");
 scanf("%d",&n);
 printf("\nEnter max track limit:");
 scanf("%d",&lim);
 a[0] = 0;
 printf("\nEnter the disk queue with requests for I/O to blocks on cylinders in request order :- \n");
 for(i=1;i<=n;i++)
 {
  scanf("%d",&a[i]);
 }
 a[n+1] = lim;
 n = n+2;
 quicksort(a,0,n-1);
 
 for(i = 0; i < n;i++)
 {	printf("%d\t",a[i]);
 	if(a[i]<p && a[i+1] > p)
 			pos = i;
 		
 }
t = p -a[pos];
	printf("The sequence of execution is : ") ;
 printf("\n%d --> %d",p,a[pos]);		
	for(i = pos;i > 0;i-- ) {
			t += (a[i] - a[i-1]);
			printf("--> %d",a[i-1]);
	}
	t = t + a[pos+1];
	 printf("--> %d",a[pos+1]);
	 for(i = pos + 1; i < n-1; i++)
	 {
	 	t += (a[i+1]-a[i]);
	 	printf("--> %d",a[i+1]);
	 }
 
 printf("\n%d",t);
	 
}
 

