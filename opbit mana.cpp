#include<stdio.h>
#include<math.h>

int main()
{
	int t,a,b,a1,b1,k,l,j=0,i,p;
	scanf("%d",&t);
	while(t--)
	{
		j=0;
		scanf("%d%d",&a,&b);
		a1=sqrt(a);
		b1=sqrt(b);
		if(a1>b1)
		p=a1-b1;
		else
		p=b1-a1;
		int s[p];
		if(a1>b1)
		{
			for(i=b1;i<a1;i++)
			s[j++]=((i+1)*(i+1))-(i*i);	
		}
		else if(b1>a1)
		{
			for(i=a1;i<b1;i++)
			s[j++]=((i+1)*(i+1))-(i*i);	
		}
		if((j-1)==0)
		{
			k=l=s[0];
		}
		else
		{
		k=s[0]&s[1];
		l=s[0]^s[1];
		for(i=2;i<j;i++)
		{
		k=k&s[i];
		l=l^s[i];
    	}
   		}
		printf("%d\n",k&l);
	}
	return 0;
}
