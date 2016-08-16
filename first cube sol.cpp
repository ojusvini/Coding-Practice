#include<bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define cout2(x, y) cout << x << " " << y <<  endl
#define N 100004
 
using namespace std;
 
 
unsigned long long q;
vector<unsigned long long> v;
 
unsigned long long gcd(unsigned long long a, unsigned long long b){
    if(b == 0) return a;
    return gcd( b , a % b );
}
 
long long mul(long long a,long long b,long long c){
    long long x = 0, y = a % c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }
    return x%c;
}
 
long long modd(long long a,long long b,long long c){
    long long x=1,y=a; 
    while(b > 0){
        if(b%2 == 1){
            x=mul(x,y,c);
        }
        y = mul(y,y,c); 
        b /= 2;
    }
    return x%c;
}
 
bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=modd(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mul(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
 
unsigned long long rho(unsigned long long n){
	
    if( n % 2 == 0 ) return 2;
    unsigned long long x = 2 , y = 2 , d = 1;
    int c = rand() % n + 1;
    while( d == 1 ){
        x = (mul( x , x , n ) + c)%n;
        y = (mul( y , y , n ) + c)%n;
        y = (mul( y , y , n ) + c)%n;
        if( x - y >= 0 ) d = gcd( x - y , n );
        else d = gcd( y - x , n );
    }
    return d;
}
 
void factor(unsigned long long n){
    if (n == 1) return;
    if( Miller(n , 6) ){
        if(q != n) v.push_back(n);
        return;
    }
    unsigned long long divisor = rho(n);
    factor(divisor);
    factor(n/divisor);
}
 
#define MOD 1000000007
 
int main(){
 
	int tc = 0;
	scanf("%d", &tc);
	
	while(tc--){
		
		int n;
		scanf("%d", &n);
 
		v.clear();
		long long A;
		
		long long ans = 1;
		for(int i = 0; i < n; i++){
			
			scanf("%lld", &A);
			q = 0;
	
			factor(A);
			if(A >= MOD)A %= MOD;
			
			ans = ans * A;
			if(ans >= MOD)ans %= MOD;
			
			
		}
		
		sort(all(v));
		int ct = 1;
	
		for(int i = 1; i < v.size(); i++){
			
			if(v[i] == v[i - 1])ct++;
			else{
			
				ct %= 3;
				if(v[i - 1] >= MOD)v[i - 1] %= MOD;
				
				for(int j = 0; j < (3 - ct)%3; j++){
					
					ans = ans * v[i - 1];
					if(ans >= MOD)ans %= MOD;
					
				}
				
				ct = 1;
			
			}
		}
		
		if(v.size() > 0){
			
			ct %= 3;
			if(v.back() >= MOD)v.back() %= MOD;
			
			for(int j = 0; j < (3 - ct)%3; j++){
						
				ans = ans * v.back();
				if(ans >= MOD)ans %= MOD;		
			}
		}
		
		cout << ans << endl;
	
	}
 
}
