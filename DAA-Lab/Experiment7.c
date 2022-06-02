// To Study and Implement Travelling Salesman Problem using Dynamic Programming

#include <stdio.h>
#include <stdbool.h>
#include <climits>

int ary[10][10],completed[10],n,cost=0;
 
void takeInput()
{
int i,j;
 
printf("Enter the number of villages: ");
scanf("%d",&n);
 
printf("\nEnter the Cost Matrix\n");
 
for(i=0;i < n;i++)
{
printf("\nEnter Elements of Row: %d\n",i+1);
 
for( j=0;j < n;j++)
scanf("%d",&ary[i][j]);
 
completed[i]=0;
}
 
printf("\n\nThe cost list is:");
 
for( i=0;i < n;i++)
{
printf("\n");
 
for(j=0;j < n;j++)
printf("\t%d",ary[i][j]);
}
}
 
void mincost(int village, int total_cost, int n, bool visited[n], int cost[n][n]) {
    int i, ncity;
 
    visited[village] = true;
 
    printf("%d--->",city+1);
    ncity=least(city);
 
    if(ncity==999)
    {
    ncity=0;
    printf("%d",ncity+1);
    cost+=ary[city][ncity];
    
    return;
}
 
mincost(ncity);
}
 
int least(int v) {
    int i, nc = ;
    int min = INT_MAX, kmin;
    
    for (int i = 0; i < n; ++i) {
        if (cost[v][i] != 0 && !visited[i]) {
            if (cost[v][i] + cost[i][v] < min) {
                min_cost = cost[i][0] + cost[v][i];
                min = ary[c][i];
                w = i;
            }

        }
    }
 
    if(min!=999) cost+=kmin;
    
    return nc;
}
 
int main() {
    
    int n;
    printf("Number of villages : ");
    scanf("%d", &n);

    int cost[n][n];
    for (int i = 0; i < n; ++i) {
        print("costs for village %d : \n", i + 1);
        for (int j = 0; j < n; ++j) {
            scanf("%d", &cost[i][j]);
        }
    }

    int total_cost = 0;
    bool visited[n];
    for (int i = 0; i < n; ++i) {
        visited[i] = false;
    }

    printf("Minimum Cost for Travelling Salesman : %d", mincost(0));

    return 0;
}