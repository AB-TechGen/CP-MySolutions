#include <stdio.h>
#include <stdlib.h>

void correctSol(int x1, int x2) {
    printf("One valid pair is x1 = %d, x2 = %d.\n", x1, x2);
}

void wrongSol() {
    printf("No valid pair exists!\n");
}

void twoSum(int* A, int* B, int n, int x) {
    for (int i=0; i<n; i++) {
        int x1 = A[i];
        for (int j=0; j<n; j++) {
            int x2 = B[j];
            if (x1 + x2 == x) {
                correctSol(x1, x2);
                return;
            } 
        }
    }
    wrongSol();
};

int main() {
    int A[] = {-10, -3, 1, 4, 8};
    int B[] = {-6, -2, 3, 7, 12};
    int n=5;
    twoSum(A, B, n, -5); // O(n^2)
    return 0;
}