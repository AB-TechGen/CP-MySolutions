#include <stdio.h>
#include <stdlib.h>

void correctSol(int x1, int x2) {
    printf("One valid pair is x1 = %d, x2 = %d.\n", x1, x2);
}

void wrongSol() {
    printf("No valid pair exists!\n");
}

void twoSum(int* A, int* B, int n, int x) {
    int i = 0, j = n-1;
    while (i < n && j >= 0) {
        int x1 = A[i], x2 = B[j];
        if (x1 + x2 == x) {
            correctSol(x1, x2);
            return;
        }
        if (x1 + x2 > x) j--;
        if (x1 + x2 < x) i++;
    }
    wrongSol();
};

int main() {
    int A[] = {-10, -3, 1, 4, 8};
    int B[] = {-6, -2, 3, 7, 12};
    int n=5;
    twoSum(A, B, n, -5); // O(n)
    return 0;
}