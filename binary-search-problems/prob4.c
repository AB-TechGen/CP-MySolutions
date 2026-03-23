#include <stdio.h>
#include <stdlib.h>

void correctSol(int i) {
    printf("First true index is at %d", i);
}

void wrongSol() {
    printf("No valid solution!\n");
}

int mountainPeakSearch(int* A, int n) {
    int l = 0, r = n-1;
    int first_true_index = -1;

    while (l <= r) {
        int mid = l + (r - l)/2;
        if (mid == n-1) return first_true_index;
        if (A[mid] > A[mid+1]) {
            first_true_index = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    return first_true_index;
}

int main() {
    int A[] = {1, 2, 6, 7, 9};
    int n = sizeof(A)/sizeof(int);

    int answer = mountainPeakSearch(A, n);
    if (answer != -1) correctSol(answer);
    else wrongSol();
    return 0;
}