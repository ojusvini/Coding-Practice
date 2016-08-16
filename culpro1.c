#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
 
int min(int a, int b){
 
	return (a>b)?b:a;
}
 
int main(){
 
		int n;
		scanf("%d", &n);
 
		int array[5001];
		int i, index, value;
		
		for(i=0;i<5001;i++){
			array[i] = 3333;//need to choose a value for reference
		}
 
		for(i=0;i<n;i++){
			
			scanf("%d", &index);
			scanf("%d", &value);
			if(array[index] > value){
				array[index] = value;
			}
		}
 
		i=1;
		int solution=1;
		int end = array[0];//for the end of the line segment
		while(i<=5000){
 
			if(array[i]==3333){
				i++;
			}
			else{
				if(i<=end){
					end = min(end, array[i]);
					i++;
				}
				else{
					end = array[i];
					solution++;//one is incremented for the current interval in process
					i++;
				}
			}
			
		}
 
		printf("%d\n", solution);
	return 0;
} 
