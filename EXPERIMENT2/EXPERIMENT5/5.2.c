
#include <stdio.h>

int main() {
    int n, i;
    
    // Step 1: Ask for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    // Step 2: Read array elements
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Initialize counters
    int positive = 0, negative = 0, even = 0, odd = 0;

    // Step 4: Check each number
    for(i = 0; i < n; i++) {
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    // Step 5: Display results
    printf("\nCount of Positive numbers: %d", positive);
    printf("\nCount of Negative numbers: %d", negative);
    printf("\nCount of Even numbers: %d", even);
    printf("\nCount of Odd numbers: %d\n", odd);

    return 0;
}
