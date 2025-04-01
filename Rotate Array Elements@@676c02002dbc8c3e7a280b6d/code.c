#include <stdio.h>

void RotateArray(int arr[], int n, int k) {
    k = k % n;  // Handle if k is greater than n
    int temp[k];

    // Step 1: Store the last k elements in a temporary array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Step 2: Shift the remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Step 3: Copy the elements from the temporary array to the start
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    RotateArray(arr, n, k);
    return 0;
}
