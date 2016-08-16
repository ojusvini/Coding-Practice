#include <stdio.h>

int main()
{
	float c,s, i;
	int d;
	while(1)
	{
		scanf("%f",&c);
		if(c==0.00)
		break;
		s= 0.00000000;
		i = 1;	
		while(s < c) {
	
		s = s + (1/(i+1));
		i++;
		}
		i = i - 1;
		d= (int)i;
		printf("%d card(s)\n",d);	
	}
	
	return 0;
	
}
