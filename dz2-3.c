#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>
int N;
int** graph;//tree

int main(void) {
	int c;//число вершин
	int i, j = 0;


	printf("Input the number of your knots: ");
	scanf("%d", &N);
	printf("%d\n", N);
	getchar();

	printf("");

		int** graph = (int**)calloc(N, sizeof(int*));
	for (int i = 0; i < N; i++) {
		graph[i] = (int*)calloc(N, sizeof(int));
	}

	if (!N) {
		printf("Allocation failure.");
		exit(1);
	}



	printf("Input the graph: ");

	FILE* file;
	file = fopen("./graph.gv", "w+t");
	//write file
	fprintf(file, "graph Homework {\n");
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			i = (getchar() - '0');
			fprintf(file, "\t%d -- ", i);
			if (getchar() == ('\n')) {
				fprintf(file, "%d\n", i); // печать несвязной вершины
				graph[i - 1][i - 1]++;
				break;
			}
			j = (getchar() - '0');
			fprintf(file, "%d\n", j);
			graph[i - 1][j - 1]++;
			getchar();

		}
	}
	fprintf(file, "}");
	//close file
	fclose(file);



	if (graph[i - 1][j - 1] > 1) printf("граф не дерево\n");
	if (i == j) {
		if (graph[i - 1][j - 1] > 0) printf("граф не дерево\n");
	}





	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++)
			printf("%d", graph[i][j]);
		getchar();
	}



}
