#include<iostream>
#include<map>

typedef unsigned long long int int64;
using namespace std;
map<int64,int64> a;

int64 max(int64 x,int64 y)
{
      return x>y?x:y;
}


int64 f(int64 b)
{
 if(a[b]!=0)return a[b];
 else a[b] = max(b,(f(b/2)+f(b/3)+f(b/4)));      
 return a[b];      
}


int main()
{
a[0] = 0;
a[1] =1;
a[2] = 2;
a[3] = 3;
a[4] = 4;
a[5] = 5;
    
    int64 n;
    while(cin>>n)
    {
                 if(n==0||n==1||n==2||n==3)cout<<n<<endl;
                 else
       cout<<max(n,(f(n/2)+f(n/3)+f(n/4)))<<endl;         
    }            
return 0;    
}
