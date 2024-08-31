#include <stdio.h> 
int main() 
{ 

	int myArray[] = { 5,3,2,1,9,7 };
	int size = sizeof(myArray) / sizeof(myArray[0]); 
printf("%d",&size);
}