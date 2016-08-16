#include<iostream>
 
using namespace std;
 
int lis(int arr[],int n) {
    int ans=0,temp,x,diff=0;
    for(int i=0;i<n-1;i++) {
        temp=1;
        x=arr[i];
        for(int j=i+1;j<n;j++) {
            if(arr[j]>=x) {
                temp++;
                x=arr[j];
            }
        }
        if(ans<=temp) {
            ans=temp;
            diff=diff?x-arr[i]:diff>x-arr[i];
        }
    }
    return diff;
}
 
int main()
{
    int arr[10000],n,t;
    cin>>t;
    while(t--) {
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<lis(arr,n)<<endl;
    }
}
 
