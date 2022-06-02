// To Study and Implement Shortest Path Algorithm

#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

const int N = 8;

int min_distance(int distance[N], bool included[N]) {
	int min = INT_MAX, min_index;

	for (int n = 0; n < N; ++n) {
        if (included[n] == false && distance[n] <= min) {
			min = distance[n], min_index = n;
        }
    }
		
	return min_index;
}

void print(int distance[N]) {
	printf("Minimum Distance from Source: \n");
	for (int n = 1; n < N; ++n) {
		printf("0 --> %d = %d\n", n, distance[n]);
    }
}

void dijkstra(int graph[N][N], int source) {
	int  distance[N];
	bool included[N];
    
    for (int n = 0; n < N; ++n) {
		distance[n] = INT_MAX, included[n] = false;
    }

	distance[source] = 0;

	for (int count = 0; count < (N - 1); ++count) {
		int u = min_distance(distance, included);
		included[u] = true;
		for (int v = 0; v < N; ++v) {
            if (
                !included[v] && graph[u][v] != 0 && 
                distance[u] != INT_MAX && 
                distance[u] + graph[u][v] < distance[v]
            ) {
				distance[v] = distance[u] + graph[u][v];
            }
        }
	}

	print(distance);
}

int main() {

	int graph[8][8] = {
        { 0,  4,  0,  0,  0,  0,  0,  8 },
        { 4,  0,  8,  0,  0,  0,  0, 11 },
        { 0,  8,  0,  7,  0,  4,  0,  0 },
        { 0,  0,  7,  0,  9, 14,  0,  0 },
        { 0,  0,  0,  9,  0, 10,  0,  0 },
        { 0,  0,  4, 14, 10,  0,  2,  0 },
        { 0,  0,  0,  0,  0,  2,  0,  1 },
        { 8, 11,  0,  0,  0,  0,  1,  0 } 
    };

	dijkstra(graph, 0);

	return 0;
}
