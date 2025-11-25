//WAP to read a list of integers and store it in a single dimensional array. Write a
//C program to print the second largest integer in a list of integers.

#include <stdio.h>

int main() {
    int n, i;

    // Step 1: Take the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Step 2: Read elements into the array
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 3: Find the largest and second largest numbers
    int first, second;
    first = second = -99999; // assuming all numbers are greater than this

    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    // Step 4: Print the result
    if(second == -99999)
        printf("There is no second largest number.\n");
    else
        printf("The second largest number is: %d\n", second);

    return 0;
}
