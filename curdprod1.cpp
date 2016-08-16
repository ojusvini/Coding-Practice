#include <bits/stdc++.h>
using namespace std;
#define LL long long
LL check(LL t , int n , int arr[]){
    LL total = 0;
    for(int i = 0 ; i < n ; i++)
        total += t / arr[i];
    return total;
}
LL binary_search(int arr[] , int n , LL product , LL ma){
    LL mid , low = 1 , high = ma;
    while(low < high){
        mid = (low + high)>>1;
        LL temp = check(mid , n , arr);
        if(temp < product)
            low = mid + 1;
        else if(temp >= product)
            high = mid;
    }
    return high;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n , T;
        scanf("%d%d",&n,&T);
        int arr[n+9];
        LL ma = -1;
        for(int i = 0 ; i < n ; i++){
            scanf("%d",&arr[i]);
            ma = max(ma , (LL)arr[i]);
        }
        //printf("ma = %lld\n",ma);
        ma = ma * T;
        printf("%lld\n",binary_search(arr, n , T , ma));
    }
    return 0;
}
