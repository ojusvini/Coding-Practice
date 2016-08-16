#include <stdio.h>
#include <math.h>

unsigned int numbers[3500], len; 
inline bool prime(unsigned int x) 
{ 
    unsigned int i, last = sqrt(x); 
    for (i = 2; i <= last; i++) 
    { 
        if (!(x % i)) 
        { 
            return 0; 
        } 
    } 
    return 1; 
} 
void generate() 
{ 
    for (unsigned int i = 2; i < 32000; i++) 
    { 
        if (prime(i)) 
        { 
            numbers[len++] = i; 
        } 
    } 
} 
inline bool process(unsigned long x) 
{ 
    unsigned int i, last = sqrt(x); 
    for (i = 0; i < len && numbers[i] <= last; i++) 
    { 
        if (!(x % numbers[i]))  
            return 0;  
    } 
    return 1; 
} 
int main() 
{ 
    int t; 
    unsigned long fno, sno; 
    generate(); 
    scanf("%d",&t);
    while (t--) 
    { 
        cin>>fno>>sno;
        if (fno == 1) 
        { 
            fno++; 
        } 
        while (fno <= sno) 
        { 
            if (process(fno)) 
            { 
                cout<<fno<<endl; 
            } 
            fno++; 
        } 
        //cout<<endl; 
    } 
    return 0; 
}

