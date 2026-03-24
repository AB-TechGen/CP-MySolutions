#include <stdio.h>
#include <stdlib.h>

int largestSumSubarray(int* A, int n, int k) {
    int l, r;
    int currSum = 0;
    for (int i=0; i<k; i++) currSum += A[i];
    int max = currSum;

    for (r = k; r < n; r++) {
        l = r - k;
        currSum = currSum - A[l] + A[r];
        if (currSum > max) max = currSum;
    }
    return max;
}

// Standard Array Handling Boilerplate //
void getArray(int* A, int n) {
    printf("Enter the array (space separated): ");
    for (int i=0; i<n; i++) scanf("%d", &A[i]);
}

void printArray(int* A, int n) {
    printf("Array: ");
    for (int i=0; i<n; i++) printf("%d ", A[i]);
    printf("\n");
};

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int *A = (int* )malloc(n*sizeof(int));
    getArray(A, n);
    printf("Original "); printArray(A, n);

    int k;
    printf("Enter the subarray size for scanning largest sum: ");
    scanf("%d", &k);
    printf("Largest Sum is %d!\n", largestSumSubarray(A, n, k));

    return 0;
}