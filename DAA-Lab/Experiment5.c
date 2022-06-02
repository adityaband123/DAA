// To Study and Implement Knapsack Problem using Greedy Method

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double ratio; int index;
} ratio;

int compare(const void *a, const void *b) {
    return (*(ratio*)a).ratio < (*(ratio*)b).ratio;
}

int knapsack(int profit[], int weight[], int capacity, int n) {
    ratio ratios[50];
    for (int i = 0; i < n; ++i) {
        ratio r;
        r.ratio = (double)profit[i] / weight[i];
        r.index = i;
        ratios[i] = r;
    }

    qsort(ratios, n, sizeof(ratio), compare);

    int i = 0, max_profit = 0;
    while (i < n && capacity > 0) {
        int index = ratios[i].index; 
        if (weight[index] <= capacity) {
            max_profit += profit[index];
            capacity -= weight[index];
        } else {
            max_profit += ratios[i].ratio * capacity;
            break;
        }
        ++i;
    }

    return max_profit;
}

int main() {
    int n, profit[50], weight[50], capacity;

    printf("number of items : ");
    scanf("%d", &n);

    printf("profit per item : ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &profit[i]);
    }

    printf("weight per item : ");
    for (int i = 0; i < n; ++i) {
        scanf("%d", &weight[i]);
    }

    printf("capacity        : ");
    scanf("%d", &capacity);

    int max_profit = knapsack(profit, weight, capacity, n);

    printf("maximum profit  : %d", max_profit);

    return 0;
}