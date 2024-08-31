#include<stdio.h>
int main(){
	int n,count=0;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Enter array element %d:",i+1);
	 scanf("%d",&arr[i]);
	}
	
	
		for(int i=0;i<n;i++){
			if(arr[i]<0){
				printf("%d ",arr[i]);
				count++;
			}
		}
		if(count==0){
			printf("There is no negetive numbers!");
		}
	}
