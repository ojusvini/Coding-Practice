#include<cstdio> 
#include<string.h> 
inline void scan(int &a){ 
    char ch=a=0; 
     while(ch<33)    ch=getc(stdin); 
    while(ch>33)    a=a*10+ch-'0',ch=getc(stdin); 
} 
 int stacks[1000010], count[25010];
 int main(){ 
     int n,k,a,b,I; 
     scan(n),scan(k); 
     for(int i=0;i<k;i++){ 
       scan(a),scan(b); 
         stacks[a]+=1,stacks[b+1]-=1; 
     } 
     for(int i=2;i<=n;i++) 
         stacks[i]+=stacks[i-1]; 
    for ( int i = 1; i <= n; ++i ) {
    	  printf( "%d\n", stacks[i] );
    }
     for(int i=1;i<=n;i++) 
         count[stacks[i]]++; 
     I=1; 
     for(int i=0;i<=25000;i++) 
         while(count[i]){ 
             stacks[I]=i; 
             ++I,--count[i]; 
         } 
     printf("%d",stacks[n/2+1]);
     return 0;
}
