#include <stdio.h>
#include <stdlib.h>

void correctSol(int i) {
    printf("First true index is at %d", i);
}

void wrongSol() {
    printf("No valid solution!\n");
}

int* boundaryGen(int* A, int n, int x) { // >= x
    int* boundaryArr = (int* )malloc(n*sizeof(int));
    for (int i=0; i<n; i++) boundaryArr[i] = (A[i] >= x);
    return boundaryArr;
}

int binarySearch(int* A, int n) {
    int l = 0, r = n-1;
    int first_true_index = -1;
    while (l <= r) {
        int mid = l + (r - l)/2;
        if (A[mid]) {
            first_true_index = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return first_true_index;
}

int main() {
    int A[] = {1, 3, 3, 3, 3, 6, 6, 7, 8, 9, 9, 9, 9};
    int n = sizeof(A)/sizeof(int);

    int* boundaryArr = boundaryGen(A, n, 3); // Generate boundary condition
    int answer = binarySearch(boundaryArr, n);

    if (answer == -1)  wrongSol();
    else correctSol(answer);

    free(boundaryArr);
    return 0;
}