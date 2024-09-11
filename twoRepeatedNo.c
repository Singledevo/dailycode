#include <stdio.h>

int main() {
    int n;
    
    // Step 1: Take input from user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n + 2];  // Array of size n+2
    int freq[n + 1]; // Frequency array to store count of numbers (from 1 to n)
    
    // Initialize frequency array with 0
    for (int i = 0; i <= n; i++) {
        freq[i] = 0;
    }

    // Step 2: Take array input from the user
    printf("Enter %d elements (numbers between 1 to %d, with two repeated):\n", n + 2, n);
    for (int i = 0; i < n + 2; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;  // Update frequency count for each element
        //aar[i] pe jo value hai, vahhi freq[] k index pe jake counter badhara hai 0 se 1 se... 
    }

    // Step 3: Find and print repeated numbers
    printf("Repeated numbers are: ");
    for (int i = 1; i <= n; i++) {
        if (freq[i] > 1) {
            printf("%d ", i);  // Print numbers that appear more than once
        }
    }

    printf("\n");
    
    return 0;
}
