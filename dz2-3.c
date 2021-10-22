#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int N,c;//число вершин
	int i, j = 0;
	int **graph;//указатель на массив

	printf("Input the number of your knots: ");
	scanf("%d", &N);
	//printf("%d\n", N);
	//graph = (int*)malloc(N*N * sizeof(int));
	int** graph = (int**)calloc(N, sizeof(int*));

	//if (!graph) {
		//printf("Allocation failure.");
		//exit(1);
	//}
	//for (i = 0; i < N; i++) {
		//for (j = 0; j < N; j++)
			//graph[i][j] = 0;
	//}
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
