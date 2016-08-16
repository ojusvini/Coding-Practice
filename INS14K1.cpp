#include<stdio.h>
int main()
{
	int t,n,q,i,j,k,l,num,m=0;
	double pos,x1[2000],y1[2000],x2[2000],y2[2000];
	scanf("%d",&t);
	while(t--)
	{
		m=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
		scanf("%lf%lf%lf%lf",&x1[i],&y1[i],&x2[i],&y2[i]);
		m++;
		}
		scanf("%d",&q);
		for(j=0;j<q;j++)
		{
			scanf("%d",&num);
			if(num==0)
			{
				l=0;
				scanf("%lf",&pos);
				for(k=0;k<m;k++)
				{
					if((x1[k]>=pos && x2[k]<=pos)||(x1[k]<=pos && x2[k]>=pos))
					l++;
				}
				printf("%d\n",l);
			}
			else if(num==1)
			{
				scanf("%lf%lf%lf%lf",&x1[m],&y1[m],&x2[m],&y2[m]);
			    m++;
			}
		}
		
	}
	return 0;
}
