#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int alreadySorted(int* A, int n) {
    int prev = INT_MIN;
    for (int i=0; i<n; i++) {
        if (A[i] < prev) return 0;
        prev = A[i];
    }
    return 1;
};

int main() {
    int t;
    scanf("%d", &t);

    for (int i=0; i<t; i++) {
        int n, k;
        scanf("%d", &n); scanf("%d", &k);
        int A[n];
        for (int j=0; j<n; j++) scanf("%d", &A[j]);

        if (k >= 2 || alreadySorted(A, n)) printf("YES\n");
        else printf("NO\n");
    }
}