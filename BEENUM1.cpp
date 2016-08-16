#include<stdio.h>

int main()
{
   int a,d,k,i,f;
   scanf("%d",&a);
   while(a!=-1){
   		f=0;
    	if((a-1)%6==0){
        	for(i=0;i<=a/6;i++){
        		if(3*i*(i+1)+1==a){
        		printf("Y\n");
        		f=1;
        		break;
        		}
        	}
        }
   if(f==0)printf("N\n");
   scanf("%d",&a);
   }
   return 0;
}
