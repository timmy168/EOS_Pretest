#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int m, int B[], int n, int C[], int *len) {
    if (m == 0) {
        for (int i = 0; i < n; i++) {
            C[i] = B[i];
        }
        *len = n;
        return;
    }
    if (n == 0) {
        for (int i = 0; i < m; i++) {
            C[i] = A[i];
        }
        *len = m;
        return;
    }

    if (A[0] < B[0]) {
        C[0] = A[0];
        merge(A + 1, m - 1, B, n, C + 1, len);
    } else if (A[0] > B[0]) {
        C[0] = B[0];
        merge(A, m, B + 1, n - 1, C + 1, len);
    } else {
        C[0] = A[0];
        merge(A + 1, m - 1, B + 1, n - 1, C + 1, len);
    }
    (*len)++;
}

int main() {
    int A[] = {1, 2, 7};
    int B[] = {2, 5, 6};
    int m = sizeof(A) / sizeof(A[0]); 
    int n = sizeof(B) / sizeof(B[0]);
    int C[m + n];
    int len = 0;

    merge(A, m, B, n, C, &len);

    printf("Merged and sorted array C: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
