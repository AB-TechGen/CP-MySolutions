#include <stdio.h>
#include <stdlib.h>

void correctSol(int i) {
    printf("First true index is at %d", i);
}

void wrongSol() {
    printf("No valid solution!\n");
}

int binarySearch(int* A, int n) {
    int first_true_index = -1;
    int l = 0, r = n-1;

    while (l <= r) {
        int mid = l + (r - l)/2;

        if (A[mid] < A[n-1]) {
            first_true_index = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return first_true_index;
}

int main() {
    int A[] = {30, 40, 50, 10, 20};
    int n = sizeof(A)/sizeof(int);

    int answer = binarySearch(A, n);

    if (answer == -1)  wrongSol();
    else correctSol(answer);

    return 0;
}