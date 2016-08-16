#include <stdio.h>
 
int main() {
    int n,i;
    scanf("%d", &n);
    long long number =0;
    long long mask=0;
    long long val;
    mask = ~(0LL);
    for (i =0; i < n; ++i) {
        scanf("%lld", &val);
        number |= val;
        mask = mask&val;
    }
    number ^= mask;
    printf("%lld\n", number);
    return 0;
}
