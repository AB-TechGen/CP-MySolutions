#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void moveZeros(int* A, int n) {
    int l = 0, r;
    for (r = 0; r < n; r++) {
        if (A[r] != 0) {
            swap(&A[r], &A[l]);
            l++;
        }
    }
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

    moveZeros(A, n);
    printf("After moving zeros to end "); printArray(A, n);
    return 0;
}