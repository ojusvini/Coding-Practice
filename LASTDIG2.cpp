#include <stdio.h>
#include <string.h>

int main()
{	int zad[][4] ={{0, 0, 0, 0}, {1, 1, 1, 1},{2, 4, 8, 6}, {3, 9, 7, 1},{4, 6, 4, 6}, {5, 5, 5, 5},
		{6, 6, 6, 6}, {7, 9, 3, 1},
		{8, 4, 2, 6}, {9, 1, 9, 1}};
	char a[1010];
	int b,i;
	int t,d,len;
	scanf("%d",&t);			
	while(t--){
		scanf("%s",a);
		scanf("%d",&b);
		if(b==0) printf("1\n");
		else {
			len=strlen(a);				
			d=a[len-1]-'0';
			i=b%4;
			if(i==0) printf("%d\n",zad[d][3]);
			else printf("%d\n",zar[d][i-1]);
		}
	}
	return 0;
}
