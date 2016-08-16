#include<iostream>
#include<cmath>
#include<cstring>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<stack>
#include<queue>
#include<iomanip>
#include<cstdio>
#define MIN(a,b) ((a)<(b)?(a):(b))
#define MAX(a,b) ((a)>(b)?(a):(b))
 
typedef long long ll;
typedef long l;
 
using namespace std;
const double pi = acos(-1.0);
 
 
int main()
{
 
       int n;
       scanf("%d",&n);
       int cnt=1;
       while(n--)
       {
                 long double a,b,x,y,r,l;
                 cin>>a>>b>>x>>y>>r>>l;
                 
                 long double rad=sqrt(2*l*l)/2.0;
                 long double dis,j,gg,kk;
                 dis=sqrt((x-a)*(x-a)+(y-b)*(y-b));
                 j=(dis*dis-rad*rad+r*r+0.0)/(2*dis);
                 long double pp=(r*r-j*j);
                 if(dis < r+rad)
                 {
                     gg=sqrt(pp)*2;
                     printf("%d. %.3Lf\n",cnt,gg);
                 }
                 else
                     printf("%d. No problem\n",cnt);
                 cnt++;
                    
       }
  
   return 0;
}
