// To Study and Implement Merge Sort Algorithm

#include <stdio.h>

void merge_sort(int a[], int l, int h) {
    if (l < h) {
        int m = l + (h - l) / 2;

        merge_sort(a, l, m);
        merge_sort(a, m + 1, h);

        int b[50], b_size = m - l + 1;
        for (int i = 0; i < b_size; ++i) {
            b[i] = a[i + l];
        }

        int c[50], c_size = h - m;
        for (int i = 0; i < c_size; ++i) {
            c[i] = a[m + 1 + i];
        }

        int i = 0, j = 0, k = l;

        while (i < b_size && j < c_size) {
            if (b[i] < c[j]) {
                a[k++] = b[i++];
            } else {
                a[k++] = c[j++];
            }
        }

        while (i < b_size) {
            a[k++] = b[i++];
        }

        while (j < c_size) {
            a[k++] = c[j++];
        }
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

    merge_sort(a, 0, n - 1);

    printf("sorted elements    : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}