#include <stdio.h>
#include <string.h>
void quicksort(char x[300],int first,int last){
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
	char a[12];
	char c[300];
	char b[300];
	int ctr,l,len,n,i,j;
	while(scanf("%s %s",a,b)!=EOF){
		l=strlen(a);
		//printf("%s\n%s\n",a,b);
		len=strlen(b);
		
		ctr=0;
		for(i=0;i<len;i++){
			if(ctr%2==0){
				//printf("ctr = %d ctr mod l =%d\n",ctr,ctr%l);
				c[i]=a[ctr%l];
				c[i+1]=c[i];
				i++;
			}
			else{
				c[i]=a[ctr%l];
			}
			ctr++;
		}
		quicksort(a,0,l-1);
		for(j=0;j<l;j++)
		for(i=0;i<len;i++)	{
			if(c[i]==a[j])printf("%c",b[i]);
		}
		printf("\n");
	}
}

