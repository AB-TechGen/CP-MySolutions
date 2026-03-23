#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void correctSol(int x1, int x2) {
    printf("One valid pair is x1 = %d, x2 = %d.\n", x1, x2);
};

void wrongSol() {
    printf("No valid pair exists!\n");
}

int binarySearch(int* A, int x, int l, int r) {
    // length = r - l + 1
    if (l > r) return INT_MAX;
    int mid = l + (r-l)/2;

    if (A[mid] == x) return mid;
    if (A[mid] < x) return binarySearch(A, x, mid+1, r);
    return binarySearch(A, x, l, mid-1);
}

void twoSum(int* A, int* B, int n, int x) {
    for (int i=0; i<n; i++) {
        int x1 = A[i];
        int i2 = binarySearch(B, x-x1, 0, n-1);
        if (i2 != INT_MAX) {
            int x2 = B[i2];
            correctSol(x1, x2);
            return;
        }
    }
    wrongSol();
};

int main() {
    int A[] = {-10, -3, 1, 4, 8};
    int B[] = {-6, -2, 3, 7, 12};
    int n=5;
    twoSum(A, B, n, -5); // O(nlogn)
    return 0;
}