#include <stdio.h>
#include <stdlib.h>

// Works on very important given condition: A is sorted
int removedDupes(int* A, int n) {
    int fast = 1, slow = 0;
    int element = A[fast];
    while (fast < n) {
        if (A[fast] != element) {
            element = A[fast];
            slow += 1;
            A[slow] = element;
        }
        fast += 1;
    }
    return slow+1;
}

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

    int newLength = removedDupes(A, n);
    printf("Length of new array = %d\n", newLength);
    printf("New "); printArray(A, newLength);

    return 0;
}