#include <stdio.h>

int main() {
  int a[3][4];
  int m,n;

  // 二次元配列に値を代入
  for (m=0;m<3;m++) {
    for (n=0;n<4;n++) {
      a[m][n] = m+n;
    };
  };

  // 二次元配列の値を表示
  for (m=0;m<3;m++) {
    for (n=0;n<4;n++) {
      printf("%d ", a[m][n]);
    };
    printf("\n");
  };
};