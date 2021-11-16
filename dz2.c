#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<stdlib.h>

int N;//число вершин
int** graph;//tree


int main(void) {
  int i,j;
  int check = 0;
  int  tops = 0;
  int count = 0;
  int ribs = 0;
  FILE* result;


  printf("Input the number of your knots: ");
  scanf("%d", &N);
  printf("%d\n", N);
  getchar();



    int** graph = (int**)calloc(N, sizeof(int*));
  for (int i = 1; i <= N; i++) {
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

  while (i != (-1)) {
    i = -1;
    j = -1;
    scanf("%d-%d", &i, &j);
    if (i == (-1))
      break;
    if (j != (-1)) {
      fprintf(file, "\t%d -- %d\n", i, j);
      graph[i][j]++;
      ribs++;
    }
    else {
      fprintf(file, "\t%d\n", i);
      graph[i][i]++;
    }
  }
  fprintf(file, "}");





  //for (i = 1; i <= N; i++) {
    //for (j = 1; j <= N; j++)
      //printf("%d", graph[i][j]);
    //getchar();
  //}


  //Processing Graph



  // Петля

  if (check == 0) {
    for (int j = 1; j <= N; j++) {
      if (graph[j][j] == 1) {
        check = 1;
        break;
      }
    }
  }
  // =

  if (check == 0) {
    for (int i = 1; i <= N; i++)
      for (int j = 1; j <= N; j++) {
        if (((graph[j][i] == 1) && (graph[i][j] == 1)) || (graph[j][i] > 1) || ((graph[i][j] > 1))) {
          check = 2;
          break;
        }
      }
  }

  //Связанность

  for (int i = 1; i <= N; i++) {
    if (graph[i] > 0)
      tops++;
  }

  //printf("ribs = %d, tops = %d", ribs, tops);
  //printf("\n");

  if (check == 0) {
    if ((ribs) >= (tops - 1)) {
      check = 0;
    }
    else {
      check = 3;
    }
  }

  //Цикл


  if (check == 0) {
    if ((tops - ribs) != 1) {
      check = 4;
    }
  }
  //close file
  fclose(file);
  result = fopen("result.txt", "w");
  fprintf(result, "Result:\n");
  if (check != 0) {
    fprintf(result, "This Graph is not a TREE\n");
    printf("This Graph is not a TREE\n");
  }
  if (check == 0) {
    printf("This Graph is a TREE\n");
    fprintf(result, "This Graph is a TREE\n");
  }
  fclose(result);



}
