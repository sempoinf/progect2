#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
int main(void) {
	int N;//число вершин
	int i, j = 0;
	int **graph;
	printf("Input the number of your knots: ");
	scanf("%d", &N);
	printf("%d\n", N);
	graph = (int**)malloc(N*N * sizeof(int));
	if (!graph) {
		printf("Allocation failure.");
		exit(1);
	}
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			graph[i][j] = 0;
	}
	printf("Input the graph: ");
	i = (getchar() - '0');
		getchar(); //считываем -
		j = (getchar() - '0');
		graph[i][j]++;
	
	
		
		
		
		
		
		for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d", graph[i][j]);
	}
	
	
	
}
