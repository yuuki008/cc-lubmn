#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main() {
  int *p1 = NULL;
  double *p2 = NULL;
  int i;

  // 動的にメモリを確保
  // sizeof(int) * SIZE (int型の配列をSIZE個分確保)
  p1 = (int*)malloc(sizeof(int)*SIZE);
  p2 = (double*)malloc(sizeof(double)*SIZE);

  for (i=0; i<SIZE; i++) {
    p1[i] = i;
    p2[i] = i / 10.0;
  }

  for (i=0; i<SIZE;i++) {
    printf("p1[%d] = %d, p2[%d] = %f\n", i, p1[i], i, p2[i]);
  }

  // メモリの解放
  free(p1);
  free(p2);
}