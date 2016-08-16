#include <stdio.h>
//Two methods
inline void fastRead(int *a)
{
	register char c=0;
	while (c<33) c=getchar_unlocked();
	*a=0;
	while (c>33)
	{
		*a=*a*10+c-'0';
		c=getchar_unlocked();
	}
}
/*inline int input( )
    {
    int n=0;
    int ch=getchar_unlocked();
    while( ch >= '0' && ch <= '9' )
    n = (n<<3)+(n<<1) + ch-'0', ch=getchar_unlocked();
    return n;
    }
int main(){
int n,t,c,i,sum;
t=input();
}
*/
inline void fastwrite(int a)
{
char snum[20];
int i=0;
do
{
snum[i++]=a%10+48;
a=a/10;
}while(a!=0);
i=i-1;
while(i>=0)
putchar_unlocked(snum[i--]);
putchar_unlocked(' ');
}
 
int main()
{
	int t;
	int m,n,i,com,c;
	fastRead(&t);
	for(;t;t--)
	{
		
		fastRead(&n);
		fastRead(&m);
		int job[n];
		for(i=0;i<n;i++)
		job[i]=i+1;
		for(i=0;i<m;i++)
		{
			fastRead(&com);
			job[com-1]=0;
		}
		c=0;
		for(i=0;i<n;i++)
		{
			if(job[i]==0)
			continue;
			else
			{
				if(c%2==0)
				{
					fastwrite(job[i]);
					job[i]=0;
				}
				c++;
			}
			//fastwrite(c);
		}
		puts("");
		for(i=0;i<n;i++)
		if(job[i]!=0)
		fastwrite(job[i]);
		puts("");
	}
	return 0;
}
 
