#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	double U,V,W,u,v,w,x,y,z,a,b,c,d,X,Y,Z;
	while(t--){
		scanf("%lf%lf%lf%lf%lf%lf",&u,&W,&V,&v,&w,&U);
		X=(w-U+v)*(U+v+w);
		x=(U-v+w)*(v-w+U);
		Y=(u-V+w)*(V+u+w);
		y=(V-w+u)*(w-u+V);
		Z=(v-W+u)*(W+u+v);
		z=(W-u+v)*(u-v+W);
		a=x*Y*Z;
		b=y*X*Z;
		c=z*X*Y;
		d=x*y*z;
		a=sqrt(a);
		b=sqrt(b);
		c=sqrt(c);
		d=sqrt(d);
		x=b+c+d-a;
		y=a+c+d-b;
		z=a+b+d-c;
		X=a+b+c-d;
		Y=x*X*y*z;
		Y=sqrt(Y);
		x=192.0*u*v*w;
		Y=Y/x;
		printf("%0.4lf\n",Y);
	}
	return 0;	
}
