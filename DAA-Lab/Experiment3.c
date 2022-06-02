// To Study and Implement Divide and Conquer Technique

#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int c = *a; *a = *b, *b = c;
}

void quick_sort(int a[], int l, int h) {
    if (l < h) {
        int p = l, i = l + 1, j = h;
        while (i <= j) {
            while (a[i] < a[p]) {
                ++i;
            }
            while (a[j] > a[p]) {
                --j;
            }

            if (i <= j) {
                swap(&a[i++], &a[j--]);
            } 
        }

        swap(&a[p], &a[j]);

        quick_sort(a, l, j - 1);
        quick_sort(a, j + 1, h);
    }
}

int main() {
    int n, a[50];

    printf("number of elements : ");
    scanf("%d", &n);

    printf("elements of array  : ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    quick_sort(a, 0, n - 1);

    printf("sorted elements    : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}
