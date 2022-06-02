// To Study and Implement Effective Bubble Sort Algorithm

#include <stdio.h>
#include <stdbool.h>

void swap(int *a, int *b) {
    int c = *a; *a = *b, *b = c;
}

void bubble_sort(int a[], int n) {
    for (int i = 0; i < (n - 1); ++i) {
        bool swapped = false;
        for (int j = 0; j < (n - i - 1); ++j) {
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
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

    bubble_sort(a, n);

    printf("sorted elements    : ");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }

    return 0;
}