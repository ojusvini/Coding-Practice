#include <stdio.h>

int main()
{
	double g,w;
	double a  = 1000.0,b = 37.0;
	scanf("%lf%lf",&g,&w);
	while(g!=-1){
		double q;
		//q = double(g/(w*1.0));
		if(g/a == w/b)
		printf("Y\n");
		else printf("N\n");
		
		scanf("%lf%lf",&g,&w);
	}	
	return 0;
}
