#include <stdio.h>
#include <stdlib.h>

// Standard Array Handling Boilerplate //
void getArray(int* A, int n) {
    for (int i=0; i<n; i++) scanf("%d", &A[i]);
}

void printArray(int* A, int n) {
    for (int i=0; i<n; i++) printf("%d ", A[i]);
};

int main() {
    int n;
    scanf("%d", &n);
    int contests = 0;
    for (int i=0; i<n; i++) {
        int* A = (int* )malloc(3*sizeof(int));
        for (int j=0; j<3; j++) scanf("%d", &A[j]);
        // printArray(A, 3);
        int count = 0;
        for (int j=0; j<3; j++) if (A[j] == 1) count += 1;
        if (count >= 2) contests++;
    }
    printf("%d", contests);

    return 0;
}