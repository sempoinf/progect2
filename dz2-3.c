#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
int N;
int **graph;//tree

int main(void) {
	int c;//число вершин
	int i, j = 0;
	

	printf("Input the number of your knots: ");
	scanf("%d", &N);
	printf("%d\n", N);
	
	
	int **graph = (int**)malloc(N * sizeof(int *));
	for (int i = 0; i < N; i++) {
		graph[i] = (int*)malloc(N * sizeof(int));
	}
	
	if (!N) {
		printf("Allocation failure.");
		exit(1);
	}

	
	
	printf("Input the graph: ");

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			i = (getchar() - '0');
			getchar();
			j = (getchar() - '0');
			graph[i][j]++;

		}
	}


	//i = (getchar() - '0');
	//getchar(); //считываем -
	//j = (getchar() - '0');
	//graph[i - 1][j - 1]++;

	//if (graph[i - 1][j - 1] > 1) printf("граф не дерево\n");
	//if (i == j) {
		//if (graph[i - 1][j - 1] > 0) printf("граф не дерево\n");
	//}





	//for (i = 0; i < N; i++) {
	//for (j = 0; j < N; j++)
		//printf("%d", graph[i][j]);
//}



}
