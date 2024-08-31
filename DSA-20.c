#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++) {
        int fact = 1;
        for (int i = 1; i <= arr[j]; i++) {
            fact *= i;
        }
        printf("%d ",fact);
    }

    return 0;
}
